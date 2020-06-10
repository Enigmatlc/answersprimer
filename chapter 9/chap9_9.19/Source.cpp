//Exercise 9.19: Rewrite the program from the previous exercise to use a
//list.List the changes you needed to make.
#include<iostream>
#include<list>
#include<string>

using std::cout;	using std::list;
using std::string;	using std::endl;
using std::cin;

int main() {
	string str;
	list<string> de;
	while (cin >> str)
		de.push_back(str);
	for (list<string>::iterator i = de.begin(); i != de.end(); i++)
	{
		cout << *i << " ";
	}

}