//Exercise 9.20: Write a program to copy elements from a list<int> into
//two deques.The even - valued elements should go into one deque and the
//odd ones into the other.
#include<deque>
#include<list>
#include<iostream>

using std::list;	using std::deque;
using std::cout;	using std::endl;

int main() {
	list<int> lst = { 0,1,2,3,4,5,6,7,8,9 };
	deque<int> odd;
	deque<int> even;

	auto it = lst.begin();
	while (it != lst.end())
		if (*it % 2) {
			odd.push_back(*it);
			it++;
		}
		else {
			even.push_back(*it);
			++it;
		}
	for (auto c : odd)
		cout << c << " ";
	cout << endl;
	for (auto c : even)
		cout << c << " ";
}