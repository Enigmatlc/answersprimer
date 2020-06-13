//Exercise 10.31: Update the program from the previous exercise so that it
//prints only the unique elements.Your program should use unque_copy(§
//	10.4.1, p. 403).
#include<iterator>
#include<vector>
#include<iostream>
#include<algorithm>

using std::vector;				using std::sort;
using std::cout;				using std::istream_iterator;	
using std::cin;					using std::ostream_iterator;	
using std::unique_copy;
int main() {
	istream_iterator<int> cin_iterator(cin), eof;
	ostream_iterator<int> cout_iterator(cout, " ");
	vector<int> vec(cin_iterator, eof);
	sort(vec.begin(), vec.end());
	unique_copy(vec.begin(), vec.end(), cout_iterator);

}