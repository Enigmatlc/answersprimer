//Exercise 8.5: Rewrite the previous program to store each word in a
//separate element.
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
		while (input >> str)
			vec.push_back(str);
	}
	input.close();
	for (auto& c : vec)
		cout << "---> "<< c << endl;
}