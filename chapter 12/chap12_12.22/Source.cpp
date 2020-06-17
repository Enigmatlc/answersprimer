#include"ConstStrBlobPtr.h"
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
	while (getline(read, word))
	{
		item.push_back(word);
	}

	ConstStrBlobPtr c_begin(item.begin()), c_end(item.end());
	while (c_begin != c_end) {
		cout << c_begin.deref() << endl;
		c_begin.incr();
	}

}