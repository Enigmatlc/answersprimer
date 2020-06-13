//Exercise 10.34: Use reverse_iterators to print a vector in reverse
//order.
#include<vector>
#include<iterator>
#include<iostream>
using std::vector;		using std::cout;
int main() {
	vector<int> vec{ 1,2,3,4,5,6,7,8,9,10 };
	auto iter = vec.rbegin();
	while (iter != vec.rend()) 
		cout << *iter++ << " ";
	
}