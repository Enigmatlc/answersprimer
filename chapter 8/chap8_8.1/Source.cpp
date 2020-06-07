//Exercise 8.1: Write a function that takes and returns an istream & .The
//function should read the stream until it hits end - of - file.The function should
//print what it reads to the standard output.Reset the stream so that it is valid
//before returning the stream.

#include<iostream>
#include<string>
using std::string;
using std::istream;

istream& func(istream& is) {
	string re = 0;
	while (!is.eof()) {
		is >> re;
		std::cout << re;

	}
	is.clear();
	return is;
}