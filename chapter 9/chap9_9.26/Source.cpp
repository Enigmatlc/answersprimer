//Exercise 9.26: Using the following definition of ia, copy ia into a vector
//and into a list.Use the single - iterator form of erase to remove the
//elements with odd values from your list and the even values from your
//vector.
//int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
#include<vector>
#include<list>
#include<iostream>

using std::vector;		using std::list;
using std::cout;		using std::endl;

int main() {
	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
	vector<int> vec(ia, ia + 11);
	list<int> li(ia, ia + 11);
	//remove even items from vector
	for (vector<int>::iterator i = vec.begin(); i < vec.end();) {
		if (!(*i % 2))
			i = vec.erase(i);
		else
			i++;
	}
	//remove odd items from list
	for (list<int>::iterator i = li.begin(); i != li.end(); ) {
		if (*i % 2)
			i = li.erase(i);
		else
			i++;
	}

	for (auto c : vec)
		cout << c << " ";
	cout << endl;
	for (auto c : li)
		cout << c << " ";
}