//Exercise 7.1: Write a version of the transaction - processing program from §
//1.6 (p. 24) using the Sales_data class you defined for the exercises in §
//2.6.1 (p. 72).

//#include "Sales_item.h"
//int main()
//{
//	Sales_item total; // variable to hold data for the next transaction
//	// read the first transaction and ensure that there are data to process
//	if (std::cin >> total) {
//		Sales_item trans; // variable to hold the running sum
//		// read and process the remaining transactions
//		while (std::cin >> trans) {
//			// if we're still processing the same book
//			if (total.isbn() == trans.isbn())
//				total += trans; // update the running total
//			else {
//				// print results for the previous book
//				std::cout << total << std::endl;
//				total = trans; // total now refers to the next book
//			}
//		}
//		std::cout << total << std::endl; // print the last transaction
//	}
//	else {
//		// no input! warn the user
//		std::cerr << "No data?!" << std::endl;
//		return -1; // indicate failure
//	}


#include"Sales_data.h"
#include<iostream>
using std::cin;		using std::cout;
using std::endl;	using std::cerr;
int main() {
	Sales_data total;
	if (cin >> total.bookNo>>total.units_sold>>total.revenue) {
		Sales_data trans;
		while (cin >> total.bookNo >> total.units_sold >> total.revenue)
		{
			if (total.bookNo == trans.bookNo) {
				total.units_sold += trans.units_sold;
				total.revenue += trans.revenue;
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