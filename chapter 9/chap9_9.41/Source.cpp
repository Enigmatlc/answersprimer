//Exercise 9.41: Write a program that initializes a string from a
//vector<char>.

#include<vector>
#include<string>
#include<iostream>

using std::cout;	using std::endl;
using std::vector;	using std::string;

int main() {
	vector<char> vec{ 'h','i','i','s','s' };
	string str(vec.begin(), vec.end());
	cout << str << endl;
}