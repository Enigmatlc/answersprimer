#include<sstream>
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using std::string;			using std::getline;
using std::vector;			using std::cin;
using std::istringstream;	using std::ifstream;
using std::cout;			using std::endl;
struct PersonInfo {
	string name;
	vector<string> phones;
};

int main() {
	string line, word; // will hold a line and word from input, respectively
	vector<PersonInfo> people; // will hold all the records from the input
	// read the input a line at a time until cin hits end-of-file (or another error)
	istringstream record; // bind record to the line we just read
	ifstream file;
	file.open("test.txt");

	while (getline(file, line)) {
		PersonInfo info; // create an object to hold this record's data
		record.clear();
		record.str(line);
		record >> info.name; // read the name
		while (record >> word) // read the phone numbers
			info.phones.push_back(word); // and store them
		people.push_back(info); // append this record to people
	}
	for (const auto c : people) {
		cout << c.name<<" ";
		for (const auto f : c.phones)
			cout << f<<" ";
		cout << endl;
	}
	//output
	//morgan 2015552368 8625550123
	//drew 9735550130
	//lee 6095550132 2015550175 8005550000
	file.close();
}