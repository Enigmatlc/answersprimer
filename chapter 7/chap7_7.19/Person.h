//Exercise 7.19: Indicate which members of your Person class you would
//declare as public and which you would declare as private.Explain your
//choice.
//
//only the data members that are part of the implementation will be private therefore name,address will be private.
//functions and constructurs will be kept public.

#pragma once
#include <string>
#include<iostream>
struct Person;
std::istream& read(std::istream&, Person&);
struct Person
{
private:
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