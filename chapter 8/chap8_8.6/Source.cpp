//Exercise 8.6: Rewrite the bookstore program from § 7.1.1 (p. 256) to read
//its transactions from a file.Pass the name of the file as an argument to main
//(§ 6.2.5, p. 218).


#include"Sales_data.h"
#include<iostream>
#include<fstream>

using std::cin;	using std::cout;
using std::endl;	using std::cerr;
using std::ifstream;
int main(int argc, char* argv[]) {
	ifstream item;
	item.open(argv[1]);
	if (item) {
	Sales_data total; // variable to hold the running sum
	if (read(item, total)) { // read the first transaction
		Sales_data trans; // variable to hold data for the next transaction
		while (read(item, trans)) { // read the remaining transactions
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
}
