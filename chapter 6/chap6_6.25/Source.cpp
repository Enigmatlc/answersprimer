//exercise 6.25: write a main function that takes two arguments.
//concatenate the supplied arguments and print the resulting string.
#include <iostream>
#include <string>
using std::string;
using std::cout;	using std::endl;
int main(int argc, char *argv[]) {
	string str;
	for (size_t i = 1; i < argc; i++)
	{
		str += argv[i];
	}
	cout << str << endl;
}