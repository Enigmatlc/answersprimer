#include<fstream>
#include<sstream>
#include<vector>
#include<string>
#include<set>
#include<map>
#include"TextQuery.h"
std::ifstream& TextQuery::read(std::ifstream& is) {
	std::string line;
	int size = 0;
	if (is) {
		while (std::getline(is, line)) {
			++size;
			lines->push_back(line);
			std::istringstream sstr(line);
			std::string word;
			while (sstr >> word)
			{
				auto& i = occur[word];
				if (!i)
					i.reset(new std::set<StrBlob::size_type>);
				i->insert(size);

			}

		}

	}
	return is;
}
QueryResult TextQuery::query(const std::string& str) const {//check if a word is inside the map and return a QueryResult object 
	auto iter = occur.find(str);
	static std::shared_ptr<std::set<StrBlob::size_type>> emty(new std::set<StrBlob::size_type>);
	if (iter != occur.end()) {
		return QueryResult(str, iter->second, lines);
	}
	else
	{
		return QueryResult(str, emty, lines);
	}
}
std::ostream& print(std::ostream& os, const QueryResult& qr) {//takes the query result object returned by query and it prints out the result.
	os << qr.q_word << " occurs " << qr.q_numbers->size() << (qr.q_numbers->size() > 1 ? " times" : " time") << std::endl;

	for (auto c : *qr.q_numbers) {
		ConstStrBlobPtr p(*qr.q_line, c);
		os << "\t(line " << c + 1 << ") " << p.deref() << std::endl;
	}
	return os;
}