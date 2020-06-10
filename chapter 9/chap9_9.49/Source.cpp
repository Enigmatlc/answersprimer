//Exercise 9.49: A letter has an ascender if, as with d or f, part of the letter
//extends above the middle of the line.A letter has a descender if, as with p or
//g, part of the letter extends below the line.Write a program that reads a file
//containing words and reports the longest word that contains neither
//ascenders nor descenders.
#include<string>
#include<fstream>
#include<iostream>
using std::ifstream;		using std::endl;
using std::string;		using std::cout;


int main() {
	ifstream item;
	item.open("test.txt");
	string word;
	string biggest;
	while (item >> word ) {
		if (word.find_first_not_of("aceimnorsuvwxz") == string::npos) {
			if (word.size() > biggest.size())
				biggest = word;
		}

	}
	cout << biggest;
}