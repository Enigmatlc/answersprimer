//Exercise 8.7: Revise the bookstore program from the previous section to
//write its output to a file.Pass the name of that file as a second argument to
//main.
#include"Sales_data.h"
#include<iostream>
#include<fstream>

using std::cin;	using std::cout;
using std::endl;	using std::cerr;
using std::ifstream;	using std::ofstream;
int main(int argc, char* argv[]) {
	ifstream item;
	ofstream out;
	item.open(argv[1]);
	if (item) {
		Sales_data total; // variable to hold the running sum
		if (read(item, total)) { // read the first transaction
			Sales_data trans; // variable to hold data for the next transaction
			while (read(item, trans)) { // read the remaining transactions
				if (total.isbn() == trans.isbn()) // check the isbns
					total.combine(trans); // update the running total
				else {
					print(out, total); // print the results
					total = trans; // process the next book
				}
			}
			print(out, total); // print the last transaction
		}
		else { // there was no input
			cerr << "No data?!" << endl; // notify the user
		}
	}
}
