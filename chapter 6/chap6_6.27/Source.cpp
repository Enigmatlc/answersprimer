//Exercise 6.27: Write a function that takes an initializer_list<int>
//and produces the sum of the elements in the list.
#include <initializer_list>
#include<iostream>
using std::initializer_list;	using std::cout;
using std::endl;
void addnums( initializer_list<int> il)
{
	int num=0;
	for (const auto& elem : il)
		num += elem;
	cout << num << endl;
}
int main() {
	addnums({1,2,3,4,5,6,7, 8, 9, 10 });
}