//Exercise 7.7: Rewrite the transaction - processing program you wrote for the
//exercises in § 7.1.2 (p. 260) to use these new functions.

#include"Sales_data.h"
#include<iostream>

using std::cin;	using std::cout;
using std::endl;	using std::cerr;
int main() {
	Sales_data total; // variable to hold the running sum
	if (read(cin, total)) { // read the first transaction
		Sales_data trans; // variable to hold data for the next transaction
		while (read(cin, trans)) { // read the remaining transactions
			if (total.isbn() == trans.isbn()) // check the isbns
				total.combine(trans); // update the running total
			else {
				print(cout, total) << endl; // print the results
				total = trans; // process the next book
			}
		}
		print(cout, total) << endl; // print the last transaction
	}
	else { // there was no input
		cerr << "No data?!" << endl; // notify the user
	}
}
