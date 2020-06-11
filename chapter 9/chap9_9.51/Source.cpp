#include"date.h"
#include<iostream>
int main() {
	date item{"10,12,1990" };
	std::cout << item.return_m() << " " << item.return_d() << " " << item.return_y();
}