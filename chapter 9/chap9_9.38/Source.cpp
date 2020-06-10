//Exercise 9.38: Write a program to explore how vectors grow in the library
//you use.

#include<vector>
#include<iostream>

using std::endl;		using std::cout;
using std::vector;

int main() {

	vector<int>vec{ 1,2,3,4,5,6,7,8,9,10 };
	cout << "capacity of vector: " << vec.capacity() << " Size of vector: " <<vec.size()<< endl;
	vec.push_back(11);
	cout << "insert an item into vector: " << endl;
	cout << "capacity of vector: " << vec.capacity() << " Size of vector: " << vec.size() << endl;
	vec.push_back(12);
	vec.push_back(13);
	vec.push_back(14);
	vec.push_back(15);
	cout << "insert 4 items into vector: " << endl;
	cout << "capacity of vector: " << vec.capacity() << " Size of vector: " << vec.size() << endl;
	vec.push_back(16);
	cout << "insert an item into vector: " << endl;
	cout << "capacity of vector: " << vec.capacity() << " Size of vector: " << vec.size() << endl;
	vec.reserve(100);
	cout << "reserve space for 100 items: " << endl;
	cout << "capacity of vector: " << vec.capacity() << " Size of vector: " << vec.size() << endl;

}