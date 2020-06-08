//Write a program to store each line from a file in a
//vector<string>.Now use an istringstream to read each element from
//the vector a word at a time.

#include<vector>
#include<sstream>
#include<iostream>
#include<fstream>
#include<string>

using std::ifstream;	using std::istringstream;
using std::vector;		using std::string;
using std::getline;		using std::cout;

ifstream& read(ifstream& in,vector<string>& vec) {
	string str;
	in.open("test.txt");
	if (in)
		while (getline(in, str))
			vec.push_back(str);
	return in;
}

int main() {
	vector<string>vec;
	ifstream item;
	read(item, vec);
	string str;
	for (vector<string>::size_type i = 0; i < vec.size(); i++)
	{
		istringstream item(vec[i]);
		while (item >> str)
			cout << str;
	}
}