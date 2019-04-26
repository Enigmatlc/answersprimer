//Exercise 6.12: Rewrite the program from exercise 6.10 in § 6.2.1 (p. 210)
//to use references instead of pointers to swap the value of two ints.Which
//version do you think would be easier to use and why ?

//the reference version is definitely easier to understand because there is no need to use the address of operator or dereference operator .

#include <iostream>

using std::cout;	using std::endl;

void swap(int& re, int& r2) {
	int i = 0;
	i = re;
	re = r2;
	r2 = i;
	cout << "Num 1 = " << re << " Num 2 = " << r2 << endl;
}


int main() {
	int num1 = 10, num2 = 20;
	cout << "Num 1 = " << num1 << " Num 2 = " << num2 << endl;
	cout << "After swap call" << endl;
	swap(num1, num2);
}