//Exercise 9.45: Write a funtion that takes a string representing a name
//and two other strings representing a prefix, such as “Mr.” or “Ms.” and a
//suffix, such as “Jr.” or “III”.Using iterators and the insert and append
//functions, generate and return a new string with the suffix and prefix
//added to the given name.

#include<string>
#include<iostream>
using std::cout;
using std::string;

string newStr(string name, string prefix, string suffix) {
	string str = " ";

	str.append(prefix);
	str.insert(str.size(),' ' + name);
	
	return str.insert(str.size(),' '+suffix);
}

int main() {
	string su = "Jr.";
	string str = newStr("This sucks", "Mr.", su);
	cout << str;
}