#include"Sales_data.h"
#include<iostream>
#include<string>
using std::string;	using std::cout;
using std::cin;		using std::endl;

int main() {
	cout << "istream constructor: " << endl;
	Sales_data item(cin);
	print(cout,item);
	cout << endl;
	cout << "default constructor" << endl;
	Sales_data item2;
	print(cout, item2);
	cout << endl;
	cout << "3 parameter constructor" << endl;
	Sales_data item3("x-45454-x", 3, 20.00);
	print(cout, item3);
	cout << endl;
}