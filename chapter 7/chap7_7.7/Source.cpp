//Exercise 7.7: Rewrite the transaction - processing program you wrote for the
//exercises in § 7.1.2 (p. 260) to use these new functions.

#include<iostream>
#include "Sales_data.h"
using std::cin;		using std::cout;
using std::endl;	using std::cerr;
int main() {
	Sales_data total;
	if (read(cin,total)) {
		Sales_data trans;
		while (read(cin,total))
		{
			if (total.isbn() == trans.isbn()) {
				total.combine(trans);
			}
			else {
				print(cout, total);
				cout << endl;
				trans = total;
			}
		}
		print(cout, total);
	}
	else {
		cerr << "No data?!" << endl;
		return -1;
	}
	return 0;
}