#include<iostream>
#include<string>
#include"Sales_data.h"

using std::cout;	using std::endl;
using std::cin;		using std::string;

int main() {
	Sales_data item1;
	cout << "Sales_data item1"<<endl;
	Sales_data item2("", 0, 0);
	cout << "Sales_data item2("", 0, 0)"<<endl;
	const string f = "string not delegating";
	Sales_data item4(f);
	cout <<"Sales_data item4(f);"<< endl;
	Sales_data item3(cin);
	cout << "Sales_data item3(cin)" << endl;
}