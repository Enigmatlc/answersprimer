//Exercise 12.24: Write a program that reads a string from the standard input
//into a dynamically allocated character array.Describe how your program
//handles varying size inputs.Test your program by giving it a string of data
//that is longer than the array size you’ve allocated.
#include<iostream>
#include<string.h>
#include<string>


using std::cout;		using std::endl;
using std::strcat;		using std::strcpy;
using std::string;		using std::cin;
using std::getline;
int main() {
	char* p = new char[20]();
	string line;
	getline(cin, line);
	strcpy(p, line.c_str());

	cout << p << endl;

	delete[] p;
}

//input hello bye
//output hello bye

//input hello hello hello hello hello hello
//output hello hello helllo hello hello hello then an error which read : HEAP CORRUPTION DETECTED