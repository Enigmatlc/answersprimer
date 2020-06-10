//Exercise 9.46: Rewrite the previous exercise using a position and length to
//manage the strings.This time use only the insert function.
#include<string>
#include<iostream>
using std::cout;
using std::string;

string newStr(string name, string prefix, string suffix) {
	string str = " ";

	str.insert(0,prefix);
	str.insert(str.size(), ' ' + name);

	return str.insert(str.size(), ' ' + suffix);
}

int main() {
	string su = "Jr.";
	string str = newStr("This sucks", "Mr.", su);
	cout << str;
}