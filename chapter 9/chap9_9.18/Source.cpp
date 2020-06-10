//Exercise 9.18: Write a program to read a sequence of strings from the
//standard input into a deque.Use iterators to write a loop to print the
//elements in the deque.

#include<iostream>
#include<deque>
#include<string>

using std::cout;	using std::deque;
using std::string;	using std::endl;
using std::cin;

int main() {
	string str;
	deque<string> de;
	while (cin >> str)
		de.push_back(str);
	for  (deque<string>::iterator i = de.begin(); i != de.end(); i++)
	{
		cout << *i << " ";
	}
		
}