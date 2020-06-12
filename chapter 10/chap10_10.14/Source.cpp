//Exercise 10.14: Write a lambda that takes two ints and returns their sum.
#include<iostream>

using std::cout;

int main() {
	auto answer = [](int i, int b) {return b + i; };
	cout << answer(10,10) << " ";
}