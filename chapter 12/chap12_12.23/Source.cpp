//Exercise 12.23: Write a program to concatenate two string literals, putting
//the result in a dynamically allocated array of char.Write a program to
//concatenate two library strings that have the same value as the literals
//used in the first program.
#include<iostream>
#include<string.h>
#include<string>


using std::cout;		using std::endl;
using std::strcat;		using std::strcpy;
using std::string;
int main() {
	char* p = new char[20]();
	const char* str = "hello";
	const char* str2 = " bye";
	strcpy(p, str);
	strcat(p, str2);
	cout << p << endl;


	char* f = new char[20]();
	string str3 = "hello";
	string str4 = " bye";
	strcpy(f, str3.c_str());
	strcat(f, str4.c_str());
	cout << f << endl;


	delete[] p;
	delete[] f;
}