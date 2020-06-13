//Exercise 10.35: Now print the elements in reverse order using ordinary
//iterators.
#include<vector>
#include<iostream>

using std::vector;		using std::cout;

int main() {
	vector<int> vec{ 1,2,3,4,5,6,7,8,9,10 };
	auto iter = vec.end();
	iter--;
	while (iter > vec.begin())
		cout << *iter-- << " ";
	cout << *iter;
}