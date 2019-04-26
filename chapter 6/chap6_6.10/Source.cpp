//Exercise 6.10: Using pointers, write a function to swap the values of two
//ints.Test the function by calling it and printing the swapped values.
#include <iostream>

using std::cout;	using std::endl;

void swap(int *p,int *p2) {
	int i = 0;
	i = *p;
	*p = *p2;
	*p2 = i;
	cout << "Num 1 = " << *p << " Num 2 = " << *p2 << endl;
}


int main() {
	int num1 = 10, num2 = 20;
	swap(&num1, &num2);
}