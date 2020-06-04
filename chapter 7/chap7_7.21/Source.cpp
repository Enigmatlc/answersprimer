//Exercise 7.21: Update your Sales_data class to hide its implementation.
//The programs you’ve written to use Sales_data operations should still
//continue to work.Recompile those programs with your new class definition to
//verify that they still work.


#include<iostream>
#include"Sales_data.h"

using std::cin;	using std::endl;
using std::cout;	using std::cerr;

int main() {
	Sales_data total(cin); // variable to hold the running sum
	if (cin) { // read the first transaction

		Sales_data trans(cin); // variable to hold data for the next transaction
		while (cin) { // read the remaining transactions

			if (total.isbn() == trans.isbn()) { // check the isbns
				total.combine(trans); // update the running total

			}
			else {
				print(cout, total) << endl; // print the results
				total = trans; // process the next book
			}
			read(cin, trans);
		}
		print(cout, total); // print the last transaction
		cout << endl;
	}
	else { // there was no input
		cerr << "No data?!" << endl; // notify the user
	}
}