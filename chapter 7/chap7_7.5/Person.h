#pragma once
#include <string>

struct Person
{
	//functions
	std::string re_name() const { return name; }
	std::string re_address() const { return address; }
	//variables
	std::string name;
	std::string address;
};
