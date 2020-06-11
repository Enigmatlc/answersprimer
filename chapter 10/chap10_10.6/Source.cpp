//Exercise 10.6: Using fill_n, write a program to set a sequence of int
//values to 0.
#include<vector>
#include<iostream>
#include<numeric>
using std::endl;		using std::cout;
using std::vector;		using std::fill_n;
int main() {
	vector<int> vec{ 1,2,3,4,5,6,7,8,9 };
	fill_n(vec.begin(), vec.size(), 6);
	cout << vec[5];
}