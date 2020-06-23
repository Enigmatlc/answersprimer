//Exercise 14.10: Describe the behavior of the Sales_data input operator if
//given the following input :
//(a)0 - 201 - 99999 - 9 10 24.95//resets everyhing to default since it puts the stream in a bad state.
//(b)10 24.95 0 - 210 - 99999 - 9 output: 10 24 22.8 0.95
#include"Sales_data.h"
#include<iostream>

int main() {
	Sales_data item;
	std::cin >> item;
	std::cout << item;
}