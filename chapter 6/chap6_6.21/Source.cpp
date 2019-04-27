//Exercise 6.21: Write a function that takes an int and a pointer to an int
//and returns the larger of the int value or the value to which the pointer
//points.What type should you use for the pointer ?
#include <iostream>

using std::cout;	using std::endl;
int bgger(const int num, const int * p) {
	if(num > *p)
		return num;
	return *p;

}
int main() {
	int num = 55, num2 = 33;
	cout << bgger(num, &num2) << endl;
}