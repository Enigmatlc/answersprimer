//Exercise 10.33: Write a program that takes the names of an input file and
//two output files.The input file should hold integers.Using an
//istream_iterator read the input file.Using ostream_iterators, write
//the odd numbers into the first output file.Each value should be followed by a
//space.Write the even numbers into the second file.Each of these values
//should be placed on a separate line.
#include<iostream>
#include<iterator>
#include<fstream>
#include<string>
using std::ifstream;			using std::ofstream;
using std::cin;					using std::endl;
using std::ostream_iterator;	using std::istream_iterator;
using std::string;				using std::cout;
int main() {
	string input;
	string odd;
	string even;
	
	cout << "Enter input file,odd file and even file names" << endl;
	cin >> input >> odd >> even;
	ifstream in;
	ofstream od;
	ofstream ev;
	od.open(odd);
	ev.open(even);
	in.open(input);
	ostream_iterator<int> o_iter(od," \n"), e_iter(ev," \n");
	istream_iterator<int> i_iter(in),eof;
	while (i_iter != eof) {
		if (*i_iter % 2) {
			o_iter = *i_iter++;
		}
		else
			e_iter = *i_iter++;
	}
	


}