//Exercise 10.12: Write a function named compareIsbn that compares the
//isbn() members of two Sales_data objects.Use that function to sort a
//vector that holds Sales_data objects.
#include"Sales_data.h"
#include<vector>
#include<iostream>
#include<algorithm>

using std::cout;		using std::endl;
using std::vector;		using std::sort;
using std::cin;

bool compareIsbn(const Sales_data& obj1, const Sales_data& obj2) {
	return obj1.isbn() < obj2.isbn();
}


int main() {
	vector<Sales_data> vec;
	Sales_data item;
	while (read(cin, item))
		vec.push_back(item);
	sort(vec.begin(), vec.end(), compareIsbn);
	vector<Sales_data>::size_type i= 0;
	while (i != vec.size()) {
		print(cout,vec[i])<<" ";
		++i;
	}
}