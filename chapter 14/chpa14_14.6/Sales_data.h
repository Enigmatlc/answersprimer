#pragma once
#include<string>
#include<iostream>
class Sales_data;
//outside declaration for non-class related operations
std::istream& read(std::istream&, Sales_data&);
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream& print(std::ostream&, const Sales_data&);
std::ostream& operator<<(std::ostream&, Sales_data&);
std::istream& operator>>(std::istream&, Sales_data&);
class Sales_data {
	//friends
	friend Sales_data add(const Sales_data&, const Sales_data&);
	friend std::istream& read(std::istream&, Sales_data&);
	friend std::ostream& print(std::ostream&, const Sales_data&);
	friend std::ostream& operator<<(std::ostream&, Sales_data&);
	friend std::istream& operator>>(std::istream&, Sales_data&);
public:
	//constructors
	Sales_data() = default;
	Sales_data(const std::string& s) :bookNo(s) {}
	Sales_data(const std::string& s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(n* p) {}
	Sales_data(std::istream& is) {
		read(is, *this);
	}
	//overloaded member-operators
	Sales_data operator+(Sales_data&);
	Sales_data& operator+=(Sales_data&);
	//functions
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
private:
	//function
	double avg_price() const {
		if (units_sold)
			return revenue / units_sold;
		else
			return 0;
	}
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
//non-member functions

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
//outside constructor
//Sales_data::Sales_data(std::istream& is) {
//	read(is, *this);
//}
//overloaded opertors
//output operator
std::ostream& operator<<(std::ostream& os,const Sales_data& item) {
	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
	return os;
}
//input operator
std::istream& operator>>(std::istream& is, Sales_data& item);
