#pragma once
//Exercise 9.51: Write a class that has three unsigned members
//representing year, month, and day.Write a constructor that takes a string
//representing a date.Your constructor should handle a variety of date
//formats, such as January 1, 1900, 1 / 1 / 1900, Jan 1, 1900, and so on.
#include<string>
#include<vector>
#include<sstream>
int monthTonum(const std::string str);
class date {
public: 
	void format(std::string str);
	date() = default;
	date(std::string str):date(){
		format(str);
	}
	int return_m() { return month; }
	int return_d() { return day; }
	int return_y() { return year; }
private:
	unsigned month=0;
	unsigned day=0;
	unsigned year=0;

};
void date::format(std::string str) {
	std::string::size_type i= str.find_first_of("/,-+?");
	while (i != std::string::npos) {
		str[i] = ' ';
		i = str.find_first_of("/,-+?", i + 1);
	}
	std::istringstream item(str);
	std::string year_f, month_f, day_f;
	if (item) {
		item >> month_f >> day_f >> year_f;
	}
	day = std::stoi(day_f);
	year = std::stoi(year_f);
	if (month_f.find_first_of("123456789") == std::string::npos) {
		month = monthTonum(month_f);
	}
	else
		month = std::stoi(month_f);
}
int monthTonum(const std::string str) {
	std::vector<std::string> months{ "Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sept","Oct","Nov","Dec" };
	std::vector<int> numb{ 1,2,3,4,5,6,7,8,9,10,11,12 };
	std::string f = str.substr(0, 3);

	for (std::size_t i = 0; i != months.size(); i++)
	{
		if (f == months[i]) {
			return numb[i];
		}

	}
}

