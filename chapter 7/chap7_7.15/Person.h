#pragma once
#include <string>
#include<iostream>
struct Person;
std::istream& read(std::istream&, Person&);
struct Person
{
	//constructors
	Person() = default;
	Person(const std::string& str,const std::string& adr):name(str),address(adr){}
	Person(std::istream& is) {
		read(is, *this);
	}
	//functions
	std::string re_name() const { return name; }
	std::string re_address() const { return address; }
	//variables
	std::string name;
	std::string address;
};
std::istream& read(std::istream& is, Person& in) {
	is >> in.name >> in.address;

	return is;
}
std::ostream& print(std::ostream& os, const Person& item) {
	os << item.name << " " << item.address;
	return os;
}