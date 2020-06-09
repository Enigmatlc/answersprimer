//Exercise 9.4: Write a function that takes a pair of iterators to a
//vector<int> and an int value.Look for that value in the rangeand return
//a bool indicating whether it was found.

#include<vector>
#include<iostream>

using std::cin;		using std::cout;
using std::endl;	using std::vector;

bool findInt(vector<int>::const_iterator b , vector<int>::const_iterator e, int i) {
	for  (;  b!=e; b++)
	{
		if (*b == i)
			return true;
	}
	return false;
}
int main() {
	vector<int> vec{ 1,2,3,4,5,6,7,8,9,10 };
	if (findInt(vec.begin(), vec.end(), 11))
		cout << "found" << endl;
	else
		cout << "not found" << endl;
}