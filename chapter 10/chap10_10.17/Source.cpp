//Exercise 10.17: Rewrite exercise 10.12 from § 10.3.1 (p. 387) to use a
//lambda in the call to sort instead of the compareIsbn function.
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
	sort(vec.begin(), vec.end(), [](const Sales_data& obj1, const Sales_data& obj2) {return obj1.isbn() < obj2.isbn(); });
	vector<Sales_data>::size_type i = 0;
	while (i != vec.size()) {
		print(cout, vec[i]) << " ";
		++i;
	}
}