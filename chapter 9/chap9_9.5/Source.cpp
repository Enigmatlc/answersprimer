//Exercise 9.5: Rewrite the previous program to return an iterator to the
//requested element.Note that the program must handle the case where the
//element is not found.

#include<vector>
#include<iostream>

using std::cin;		using std::cout;
using std::endl;	using std::vector;

vector<int>::iterator findInt(vector<int>::iterator b, vector<int>::iterator e, int i) {
	vector<int>::iterator iter = b;
	for (; b != e; b++)
	{
		if (*b == i)
			return b;
	}

	return iter;
}
int main() {
	vector<int> vec{ 1,2,3,4,5,6,7,8,9,10 };
	vector<int>::iterator iter = findInt(vec.begin(), vec.end(), 5);
	cout << *iter << endl;
}