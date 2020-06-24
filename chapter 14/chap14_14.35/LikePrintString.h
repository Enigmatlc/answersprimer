#pragma once
#include<iostream>
#include<string>

class LikePrintString {
public:
	LikePrintString( std::istream& i= std::cin ,std::string s=("")):is(i),str(s){}
	std::string  operator()(std::istream& is) {
		std::getline(is, str);


		
		return str;
	}
private:

	std::istream& is;
	std::string str;
};