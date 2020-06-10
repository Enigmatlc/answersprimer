//Exercise 9.27: Write a program to find and remove the odd - valued
//elements in a forward_list<int>.

#include<forward_list>
#include<iostream>

using std::forward_list;
using std::cout;		using std::endl;

int main() {
	forward_list<int> fli{ 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };

	//remove odd items from list
	auto prev = fli.before_begin(); // denotes element "off the start" of flst
	auto curr = fli.begin(); // denotes the first element in flst
	while (curr != fli.end()) { // while there are still elements to
			if (*curr % 2) // if the element is odd
				curr = fli.erase_after(prev); // erase it and move curr
			else {
				prev = curr; // move the iterators to denote the next
				++curr; // element and one before the next
			}
	}

	for (auto c : fli)
		cout << c << " ";
	cout << endl;
}
