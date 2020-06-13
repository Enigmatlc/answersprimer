//Exercise 10.29: Write a program using stream iterators to read a text file
//into a vector of strings.
#include<vector>
#include<string>
#include<iostream>
#include<fstream>
#include<iterator>
#include<algorithm>

using std::ifstream;	using std::vector;
using std::cout;		using std::istream_iterator;
using std::string;		using std::copy;
using std::back_inserter;
int main() {
	ifstream read;
	read.open("test.txt");
	vector<string> vec;
	if (read) {
		istream_iterator<string> file_stream(read),eof;
		copy(file_stream, eof, back_inserter(vec));

	}
	for (auto c : vec)
		cout << c << " ";
}