#pragma once
#include<iostream>
#include<string>
#include<vector>
class LikePrintString {
public:
	LikePrintString(std::istream& i = std::cin, std::string s = ("")) :is(i), str(s) {}
	std::string  operator()(std::istream& is) {
		std::getline(is, str);

		vec.push_back(str);

		return str;
	}
private:
	std::vector<std::string> vec;
	std::istream& is;
	std::string str;
};
