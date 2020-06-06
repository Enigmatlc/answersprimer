#pragma once
//Exercise 7.38: We might want to supply cin as a default argument to the
//constructor that takes an istream& .Write the constructor declaration that
//uses cin as a default argument.
#include<string>
#include<iostream>
class Sales_data;
std::istream& read(std::istream&, Sales_data&);
class Sales_data {
	friend std::istream& read(std::istream& is, Sales_data& item);
public:
	// defines the default constructor as well as one that takes a string argument
	Sales_data(std::string s = "") : bookNo(s) { }
	// remaining constructors unchanged
	Sales_data(std::string s, unsigned cnt, double rev) :
		bookNo(s), units_sold(cnt), revenue(rev* cnt) { }
	Sales_data(std::istream& is=std::cin) { read(is, *this); }
	// remaining members as before
private:
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};


std::istream& read(std::istream& is, Sales_data& item) {
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}