//Exercise 16.19: Write a function that takes a reference to a container and
//prints the elements in that container. Use the container’s size_type and
//size members to control the loop that prints the elements.
#include<vector>
#include<iostream>

using std::endl;
using std::cout;
using std::vector;


template<typename T> void print(T& cont) {
	for (typename T::size_type i = 0; i < cont.size(); i++)
	{
		cout << cont[i] << endl;
	}
}

int main() {
	vector<int> vec{ 1,2,3,4,4,5,6 };
	print(vec);
}