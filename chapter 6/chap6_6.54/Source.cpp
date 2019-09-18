//Exercise 6.54: Write a declaration for a function that takes two int
//parameters and returns an int, and declare a vector whose elements have
//this function pointer type.
#include<vector>
#include<iostream>

using std::vector;


int func(int, int);
using F =int(*)(int, int);

int main() {
	vector<F> vec;

}