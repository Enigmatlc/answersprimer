//Exercise 7.41: Rewrite your own version of the Sales_data class to use
//delegating constructors.Add a statement to the body of each of the
//constructors that prints a message whenever it is executed.Write
//declarations to construct a Sales_data object in every way possible.Study
//the output until you are certain you understand the order of execution among
//delegating constructors.
#pragma once
#include<string>
#include<iostream>
class Sales_data;
//outside declaration for non-class related operations
std::istream& read(std::istream&, Sales_data&);
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream& print(std::ostream&, const Sales_data&);
class Sales_data {
	//friends
	friend Sales_data add(const Sales_data& lhs, const Sales_data& rhs);
	friend std::istream& read(std::istream& is, Sales_data& item);
	friend std::ostream& print(std::ostream& os, const Sales_data& item);
public:
	//constructors
	Sales_data(std::string s,unsigned cnt,double price):bookNo(s),units_sold(cnt),revenue(cnt*price){std::cout<<"not-Delegating: " << std::endl;
	}

	Sales_data(): Sales_data("",0,0) { std::cout << "default-delegating: " << std::endl;
	}
	Sales_data(const std::string& s) :bookNo(s) { std::cout << "string not-Delegating: "<<std::endl; }
	Sales_data(std::istream& is):Sales_data() {
		std::cout << "istream Delegating: " << std::endl;
		read(is, *this);
	}
	//functions
	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
private:
	//function
	inline double avg_price() const {
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