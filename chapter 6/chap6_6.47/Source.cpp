//Exercise 6.47: Revise the program you wrote in the exercises in § 6.3.2 (p.
//	228) that used recursion to print the contents of a vector to conditionally
//	print information about its execution.For example, you might print the size of
//	the vector on each call.Compile and run the program with debugging
//	turned on and again with it turned off.
#define NDEBUG

#include <vector>
#include <iostream>
#include <iterator>
using std::cout;	using std::endl;
using std::vector;
void prnt(vector<int>::const_iterator begin, vector<int>::const_iterator end) {
#ifndef NDEBUG
	auto sze = std::distance(begin, end);
	cout << "size= " << sze << endl;
#endif // !NDEBUG

	if (begin != end) {
		cout << *begin << endl;
		prnt(++begin, end);
	}
}
int main() {
	vector<int> vec = { 1,2,3,4,5,6,7,8,9 };
	prnt(vec.cbegin(), vec.cend());
}