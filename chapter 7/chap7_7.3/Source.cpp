//Exercise 7.3: Revise your transaction - processing program from § 7.1.1 (p.
//256) to use these members.

#include<iostream>
#include "Sales_data.h"
using std::cin;		using std::cout;
using std::endl;	using std::cerr;
int main() {
	Sales_data total;
	if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
		Sales_data trans;
		while (cin >> total.bookNo >> total.units_sold >> total.revenue)
		{
			if (total.isbn() == trans.isbn()) {
				total.combine(trans);
			}
			else {
				cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
				trans = total;
			}
		}
		cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
	}
	else {
		cerr << "No data?!" << endl;
		return -1;
	}
	return 0;
}