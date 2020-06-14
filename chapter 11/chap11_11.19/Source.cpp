//Exercise 11.19: Define a variable that you initialize by calling begin() on
//the multiset named bookstore from § 11.2.2 (p. 425).Write the
//variable’s type without using auto or decltype.

#include<set>
#include"Sales_data.h"
using std::multiset;
bool compareIsbn(const Sales_data& lhs, const Sales_data
	& rhs)
{
	return lhs.isbn() < rhs.isbn();
}
int main() {
	multiset<Sales_data, bool(*)(const Sales_data&, const Sales_data&)>bookstore(compareIsbn);
	multiset<Sales_data, bool(*)(const Sales_data&, const Sales_data&)>::iterator iter = bookstore.begin();
}