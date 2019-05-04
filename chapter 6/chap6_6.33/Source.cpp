//Exercise 6.33: Write a recursive function to print the contents of a vector.
#include <vector>
#include <iostream>
using std::cout;	using std::endl;
using std::vector;
void prnt(vector<int>::const_iterator begin, vector<int>::const_iterator end) {
	if (begin != end ) {
		cout << *begin << endl;
		prnt(++begin, end);
	}
}	
int main() {
	vector<int> vec = { 1,2,3,4,5,6,7,8,9 };
	prnt(vec.cbegin(),vec.cend());
}