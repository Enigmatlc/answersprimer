//Exercise 8.9: Use the function you wrote for the first exercise in § 8.1.2 (p.
//	314) to print the contents of an istringstream object.

#include<iostream>
#include<string>
#include<sstream>

using std::string;	using std::istringstream;
using std::istream;

istringstream& func(istringstream& is) {
	string lel;
	while (is >> lel) {
		std::cout << lel;
	}

	is.clear();
	return is;
}
int main() {
	string str;
	std::getline(std::cin, str);
	istringstream item(str);
	func(item);
}