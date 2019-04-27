//Exercise 6.22: Write a function to swap two int pointers.
#include <iostream>

using std::cout;	using std::endl;

void swapp(int* p, int* p2) {
	int i = *p;
	*p = *p2;
	*p2 = i;
}
int main() {
	int i = 10, j = 20;
	cout << "i = " << i << " j = " << j << endl;
	cout << "After swap" << endl;
	swapp(&i, &j);
	cout << "i = " << i << " j = " << j << endl;
}