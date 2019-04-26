//Exercise 6.11: Write and test your own version of reset that takes a
//reference.
#include <iostream>

using std::cout;	using std::endl;
// function that takes a reference to an int and sets the given object to zero
void reset(int& i) // i is just another name for the object passed to reset
{
	i = 0; // changes the value of the object to which i refers
}
int main() {
	int j = 42;
	reset(j); // j is passed by reference; the value in j is changed
	cout << "j = " << j << endl; // prints j = 0
}