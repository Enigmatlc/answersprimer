//Exercise 8.2: Test your function by calling it, passing cin as an argument.

#include<iostream>
#include<string>
using std::string;
using std::istream;

istream& func(istream& is) {
	is.clear();
	string re = "";
	while (!is.eof()) {
		is >> re;
		std::cout << re<<std::endl;

	}
	is.clear();
	return is;
}
	int main() {
		func(std::cin);
	}