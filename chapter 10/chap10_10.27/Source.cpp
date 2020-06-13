//Exercise 10.27: In addition to unique(§ 10.2.3, p. 384), the library
//defines function named unique_copy that takes a third iterator denoting a
//destination into which to copy the unique elements.Write a program that
//uses unique_copy to copy the unique elements from a vector into an
//initially empty list.

#include<vector>
#include<list>
#include<algorithm>
#include<iostream>
#include<iterator>
using std::unique_copy;			using std::list;
using std::vector;				using std::cout;
using std::back_inserter;
int main() {
	vector<int> vec{ 1,2,3,4,5,77,77,66,66,1,10 };
	list<int> li;
	unique_copy(vec.begin(), vec.end(), back_inserter(li));
	for (auto c : li)
		cout << c << " ";
}