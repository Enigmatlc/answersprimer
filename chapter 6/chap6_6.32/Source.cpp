//Exercise 6.32: Indicate whether the following function is legal.If so, explain
//what it does; if not, correct any errors and then explain it.

//it populates the array with the values from 0-9 by returning a reference to current location in the array.

#include <iostream>
using std::cout;	using std::endl;

int& get(int* arry, int index) { 
return arry[index]; 
}

int main() {
	int ia[10];
	for (int i = 0; i != 10; ++i)
		get(ia, i) = i;
	cout << ia[9] << endl;
	
}