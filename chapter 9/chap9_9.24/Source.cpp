//Exercise 9.24: Write a program that fetches the first element in a vector
//using at, the subscript operator, front, and begin.Test your program on
//an empty vector.

#include<vector>
#include<iostream>

using std::vector;		using std::cout;
using std::endl;

int main() {
	vector<int> vec{ 1,2,3,4,5,6 };
	cout<<"at: "<<vec.at(0)<<endl;
	cout << "subscript: " << vec[0] << endl;
	cout << "front: " << vec.front() << endl;
	cout << "begin: " << *vec.begin() << endl;
}