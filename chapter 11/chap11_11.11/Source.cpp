//Exercise 11.11: Redefine bookstore without using decltype
#include<set>
#include"Sales_data.h"
using std::multiset;
bool compareIsbn(const Sales_data& lhs, const Sales_data
	& rhs)
{
	return lhs.isbn() < rhs.isbn();
}
int main() {
	using ty=bool(*)(const Sales_data & , const Sales_data&);
	multiset<Sales_data, ty>bookstore(compareIsbn);
}