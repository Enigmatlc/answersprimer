#pragma once
#include<string>
using std::string;
struct Sales_data {
	//functions
	string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	//variables
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
Sales_data& Sales_data::combine(const Sales_data& re) {
	units_sold += re.units_sold;
	revenue += re.revenue;

	return *this;
}