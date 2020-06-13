//Exercise 10.30: Use stream iterators, sort, and copy to read a sequence
//of integers from the standard input, sort them, and then write them back to
//the standard output.
#include<iterator>
#include<vector>
#include<iostream>
#include<algorithm>

using std::vector;				using std::sort;
using std::copy;				using std::cout;
using std::istream_iterator;	using std::cin;
using std::ostream_iterator;
int main() {
	istream_iterator<int> cin_iterator(cin),eof;
	ostream_iterator<int> cout_iterator(cout," ");
	vector<int> vec(cin_iterator, eof);
	sort(vec.begin(), vec.end());
	copy(vec.begin(), vec.end(), cout_iterator);

}