//Exercise 10.37: Given a vector that has ten elements, copy the elements
//from positions 3 through 7 in reverse order to a list.
#include<vector>
#include<list>
#include<iostream>
using std::vector;		using std::list;
using std::cout;		
int main() {
	vector<int> vec{ 1,2,3,4,5,6,7,8,9,10 };

	list<int> li(vec.rbegin() + 2, vec.rend() - 3);
	for (auto c : li)
		cout << c << " ";
}