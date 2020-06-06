#pragma once
#include<string>
//Exercise 7.55: Is the Data class from § 7.5.5 (p. 298) a literal class ? If
//not, why not? If so, explain why it is literal.
//no because it does not have a constexpr constructor and std::string is not a literal type.

struct Data {
	int ival;
	std::string s;
};