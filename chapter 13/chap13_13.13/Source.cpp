//Exercise 13.13: A good way to understand copy - control members and
//constructors is to define a simple class with these members in which each
//member prints its name :
//Click here to view code image
//struct X {
//	X() { std::cout << "X()" << std::endl; }
//	X(const X&) {
//		std::cout << "X(const X&)" <<
//			std::endl;
//	}
//};
//Add the copy - assignment operator and destructor to X and write a program using
//X objects in various ways : Pass them as nonreferenceand reference parameters;
//dynamically allocate them; put them in containers;and so forth.Study the output
//until you are certain you understand whenand why each copy - control member is
//used.As you read the output, remember that the compiler can omit calls to the
//copy constructor.
#include<iostream>
using std::cout;
using std::endl;
struct X {
	X() { std::cout << "X()" << std::endl; }
	X(const X&) {
		std::cout << "X(const X&)" <<
			std::endl;
	}
	~X() { cout << "~X" << endl; }
	X& operator=(const X&);
};
X& X::operator=(const X&) {
	cout << "operator=" << endl;
	return *this;
}
void F(X& c, X B,X j) {
	c = B;
	X*p  = new X;

	delete p;
}
int main() {
	X item;
	X item2(item);
	X item3;
	F(item, item2, item3);
}