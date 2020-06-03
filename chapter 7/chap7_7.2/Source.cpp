//Exercise 7.2: Add the combine and isbn members to the Sales_data
//class you wrote for the exercises in § 2.6.2 (p. 76).



/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <string>
#include <iostream>

struct Sales_data {
	std::string isbn() const;
	Sales_data& combine(const Sales_data&);
	std::string bookNo;
	unsigned units_sold;
	double revenue;
};
std::string Sales_data::isbn() const {
	return bookNo;
}
Sales_data& Sales_data::combine(const Sales_data& re){
	this->units_sold += re.units_sold;
	this->revenue += re.revenue;
	return *this;
}
