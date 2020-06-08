#pragma once
#include<string>
#include<iostream>
#include<fstream>
using std::string;
struct Sales_data {
	//functions
	string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
	//variables
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
//members functions
Sales_data& Sales_data::combine(const Sales_data& re) {
	units_sold += re.units_sold;
	revenue += re.revenue;

	return *this;
}
double Sales_data::avg_price() const {
	if (units_sold)
		return revenue / units_sold;
	else
		return 0;
}
//non-members functions
Sales_data add(const Sales_data&, const Sales_data&);
std::ofstream& print(std::ofstream&, const Sales_data&);
std::istream& read(std::istream&, Sales_data&);

std::istream& read(std::istream& is, Sales_data& item) {
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}
std::ofstream& print(std::ofstream& os, const Sales_data& item) {
	os.open("answers.txt");
	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
	return os;
}
Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}