//Exercise 12.20: Write a program that reads an input file a line at a time
//into a StrBlob and uses a StrBlobPtr to print each element in that
//StrBlob.
#include"StrBlob.h"
#include<fstream>
#include<string>
#include<memory>
#include<iostream>
using std::string;
using std::ifstream;
using std::getline;
using std::cout;
using std::endl;
int main() {
	StrBlob item;
	ifstream read;
	read.open("test.txt");
	string word;
	cout << "before copy" << endl;
	//assignment 13.3
	//item.shr();
	while (getline(read,word))
	{
		item.push_back(word);
	}

	StrBlobPtr c_begin(item.begin()), c_end(item.end());
	while (c_begin != c_end) {
		cout << c_begin.deref() << endl;
		c_begin.incr();
	}
	//assignment 13.3
	//cout <<"after copy: "<< endl;
	//StrBlob item2 = item;
	//item.shr();
	//StrBlobPtr f_begin(item2.begin()), f_end(item2.end());
	//while (f_begin != f_end) {
	//	cout << f_begin.deref() << endl;
	//	f_begin.incr();
	//}
}