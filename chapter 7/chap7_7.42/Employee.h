#pragma once
#include<string>
#include<iostream>
std::istream& read(std::istream&, Employee&);

class Employee {
	friend std::istream& read(std::istream& is, Employee& item);
public:
	//constructors
	Employee(std::string n, unsigned a, double h, double w, std::string p) :name(n), age(a), h_pay(h), w_hours(w),position(p){}
	Employee() :Employee("", 0, 0, 0, ""){}
	Employee(std::istream& is):Employee() {
		read(is, *this);
	}
private:
	
	std::string name;
	unsigned age;
	double h_pay;
	double w_hours;
	std::string position;
};
std::istream& read(std::istream& is, Employee& item) {
	is >> item.name >> item.age >> item.h_pay >> item.w_hours >> item.position;
	return is;
}