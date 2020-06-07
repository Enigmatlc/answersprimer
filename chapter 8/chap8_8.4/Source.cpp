//Exercise 8.4: Write a function to open a file for input and read its contents
//into a vector of strings, storing each line as a separate element in the
//vector.
#include<vector>
#include<fstream>
#include<iostream>
#include<string>

using std::vector;	using std::ifstream;
using std::cout;	using std::endl;
using std::string;
int main() {
	ifstream input;
	string str;
	vector<string> vec;
	input.open("test.txt");
	if (input) {
		while (std::getline(input, str))
			vec.push_back(str);
	}
	for (auto& c : vec)
		cout << c << endl;
}