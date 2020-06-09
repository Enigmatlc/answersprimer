//Exercise 9.15: Write a program to determine whether two vector<int>s
//are equal.

#include<vector>
#include<iostream>

using std::vector;	using std::endl;
using std::cout;

int main() {
	vector<int> vec{ 1,2,3,4,5,6 };
	vector<int> vec2{ 1,2,3,4,5 };

	if (vec == vec2)
		cout << "equal" << endl;
	else
		cout << "not equal" << endl;
}