//Exercise 13.19: Does your Employee class need to define its own versions
//of the copy - control members ? If so, why ? If not, why not? Implement
//whatever copy - control members you think Employee needs.no, since each employee has to be unique i also included the deleted assignment operator to prevent employees from being copied.

#pragma once
#pragma once
#include<string>

class employee
{
public:
	employee() :id(num + 1) {}
	employee(std::string s) :name(s), id(num + 1) {}
	employee& operator=(const employee&) = delete;//we dont want to copy employee objects since each employee has to be unique.

private:
	static int num;
	std::string name;
	int id;
};
