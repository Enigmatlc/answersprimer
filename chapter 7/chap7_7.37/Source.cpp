//Exercise 7.37: Using the version of Sales_data from this section,
//determine which constructor is used to initialize each of the following
//variablesand list the values of the data members in each object :
//Click here to view code image
//Sales_data first_item(cin);
#include"Sales_data.h"
#include<iostream>

Sales_data first_item(std::cin);//Sales_data(std::istream& is) { read(is, *this); }
int main() {
	Sales_data next; //Sales_data(std::string s = "") : bookNo(s) { }
	Sales_data last("9-999-99999-9");//Sales_data(std::string s = "") : bookNo(s) { }
}