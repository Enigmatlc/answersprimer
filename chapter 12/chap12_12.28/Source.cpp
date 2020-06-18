//Exercise 12.28: Write a program to implement text queries without defining
//classes to manage the data.Your program should take a file and interact
//with a user to query for words in that file.Use vector, map, and set
//containers to hold the data for the file and to generate the results for the
//queries.
#include<fstream>
#include<vector>
#include<set>
#include<sstream>
#include<string>
#include<map>
#include<memory>
#include<iostream>
using std::shared_ptr;		using std::ostream;
using std::ifstream;		using std::istringstream;
using std::set;				using std::vector;
using std::string;			using std::map;
using std::getline;			using std::cout;
using std::endl;			using std::cin;

ostream& print(ostream& os, map<string, shared_ptr<set<vector<string>::size_type>>>& occur, vector<string>& vec,const string word) {
	auto iter = occur.find(word);
	static std::shared_ptr<std::set<std::vector<std::string>::size_type>> emty(new std::set<std::vector<std::string>::size_type>);
	
	if (iter != occur.end()) {
		shared_ptr <set<vector<string>::size_type>> word_num = iter->second;
		os << word << " occurs " << word_num->size() << (word_num->size() > 1 ? " times" : " time") << std::endl;
		for (auto c : *word_num) {
			std::cout << "\t( line " << c << " ) " << vec.at(c - 1) << std::endl;
		}
	}
	else
	{
		os << word << " occurs " << "0 " <<  " times"  << std::endl;
	}
	return os;
}


ifstream& read(ifstream& is,vector<string>& vec, map<string,shared_ptr<set<vector<string>::size_type>>>& occur) {
	string line;
	int size = 0;
	if (is) {
		while (getline(is, line))
		{
			++size;
			istringstream str_s(line);
			vec.push_back(line);
			string word;
			while (str_s >> word) {
				auto& iter = occur[word];
				if (!iter)
					iter.reset(new set<vector<string>::size_type>);
				iter->insert(size);
			}
		}
	}
	return is;
}
void runQueries( map<string, shared_ptr<set<vector<string>::size_type>>>& occur, vector<string>& vec)
{

	while (true) {
		cout << "enter word to look for, or q to quit: ";
		string s;
		// stop if we hit end-of-file on the input or if a 'q' is entered
		if (!(cin >> s) || s == "q") break;
		// run the query and print the results
		print(cout,occur,vec,s) << endl;
	}
}
int main() {
	ifstream item;
	map<string, shared_ptr<set<vector<string>::size_type>>> occur;
	vector<string> vec;
	item.open("lines.txt");
	read(item, vec, occur);
	runQueries(occur, vec);

}