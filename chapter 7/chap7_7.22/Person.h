

//Exercise 7.22: Update your Person class to hide its implementation.

#pragma once
#include <string>
#include<iostream>
class Person;
//outside declarition for non-class operations
std::istream& read(std::istream&, Person&);
std::ostream& print(std::ostream&, const Person&);
class Person
{
private:
	//friends
	friend std::istream& read(std::istream& is, Person& in);
	friend std::ostream& print(std::ostream& os, const Person& item);
	//constructors
	Person() = default;
	Person(const std::string& str, const std::string& adr) :name(str), address(adr) {}
	Person(std::istream& is) {
		read(is, *this);
	}
	//functions
	std::string re_name() const { return name; }
	std::string re_address() const { return address; }
public:
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
