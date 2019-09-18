//Exercise 6.51: Write all four versions of f.Each function should print a
//distinguishing message.Check your answers for the previous exercise.If your
//answers were incorrect, study this section until you understand why your
//answers were wrong.
#include<iostream>

using std::endl;	using std::cout;

void f() {
	cout << "f()" << endl;
}
void f(int ) {
	cout << "f(int)" << endl;
}
void f(int , int ) {
	cout << "f(int,int)" << endl;
}
void f(double, double = 7.66) {
	cout << "f(double,double)" << endl;
}

int main() {
	//f(2.56, 42);more than one instance of overloaded function "f" matches the argument list
	f(42); //f(int)
	f(42, 0); // f(int,int)
	f(2.56, 3.14); //f(double,double)
}