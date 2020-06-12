//Exercise 10.15: Write a lambda that captures an int from its enclosing
//function and takes an int parameter.The lambda should return the sum of
//the captured int and the int parameter.

#include<iostream>

using std::cout;

int main() {
	int f = 20;
	auto lamb = [f](int j) {return j + f; };
	cout << lamb(10);
}
