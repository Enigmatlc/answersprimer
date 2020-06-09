//Exercise 9.16: Repeat the previous program, but compare elements in a
//list<int> to a vector<int>.

#include<vector>
#include<list>
#include<iostream>

using std::vector;	using std::endl;
using std::cout;	using std::list;

int main() {
	list<int> li{ 1,2,3,4,5 };
	vector<int> vec{ 1,2,3,4,5 };
	if (vec.size() == li.size()) {
		list<int>::iterator j= li.begin();
		for (vector<int>::size_type i = 0; i != vec.size(); j++,i++) {
			if (vec[i] != *j) {
				cout << "not equal" << endl;
				return 0;
			}
		}
		cout << "equal" << endl;
	}
	else
		cout << "not equal";
}