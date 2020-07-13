//Exercise 16.20: Rewrite the function from the previous exercise to use
//iterators returned from begin and end to control the loop.

#include<vector>
#include<iostream>

using std::endl;
using std::cout;
using std::vector;


template<typename T> void print(T& cont) {
	for (typename T::iterator i = cont.begin(); i < cont.end();)
	{
		cout << *i++ << endl;
	}
}

int main() {
	vector<int> vec{ 1,2,3,4,4,5,6 };
	print(vec);
}