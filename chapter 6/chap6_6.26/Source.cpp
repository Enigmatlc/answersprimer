//Exercise 6.26: Write a program that accepts the options presented in this
//section.Print the values of the arguments passed to main.
#include <iostream>
using std::cout;	using std::endl;
int main(int argc, char* argv[]) { 
	for (size_t i = 1; i < argc; i++)
	{
		cout << argv[i] << endl;
	}
}