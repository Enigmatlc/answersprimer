#pragma once
#include<string>
#include<iostream>
struct Sales_data {
	//contructors
	Sales_data() = default;
	Sales_data(const std::string& s) :bookNo(s) {}
	Sales_data(const std::string& s,unsigned n,double p):bookNo(s),units_sold(n),revenue(n*p){}
	Sales_data(std::istream& is);
	//functions
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
	//variables
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
//member functions
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
//non-member functions
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream& print(std::ostream&, const Sales_data&);
std::istream& read(std::istream&, Sales_data&);

std::istream& read(std::istream& is, Sales_data& item) {
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}
std::ostream& print(std::ostream& os, const Sales_data& item) {
	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
	return os;
}
Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}
//outside constructors
Sales_data::Sales_data(std::istream& is) {
	read(is, *this);
}