//Exercise 10.32: Rewrite the bookstore problem from § 1.6 (p. 24) using a
//vector to hold the transactions and various algorithms to do the processing.
//Use sort with your compareIsbn function from § 10.3.1 (p. 387) to
//arrange the transactions in order, and then use find and accumulate to
//do the sum.
#include <iostream>
#include <vector>
#include "Sales_item.h"
#include <algorithm>
#include <numeric>
#include <iterator>
using std::istream_iterator;	using std::ostream_iterator;
using std::sort;				using std::find_if;
using std::vector;				using std::accumulate;
using std::cin;					using std::cout;
bool compareIsbn2(const Sales_item& obj1, const Sales_item& obj2) {
	return obj1.isbn() < obj2.isbn();
}
int main()
{
	vector<Sales_item> vec;
	istream_iterator<Sales_item> cin_stream(cin), eof;
	ostream_iterator<Sales_item> cout_stream(cout);
	vec.push_back(*cin_stream++);//read the first transaction then

	while (cin_stream != eof) {//read the rest of the transcations

		vec.push_back(*cin_stream++);

	}
	sort(vec.begin(), vec.end(), compareIsbn2);
	for (auto i = vec.begin(),e=vec.begin(); i < vec.end(); i=e)
	{
		e = find_if(i, vec.end(), [i](const Sales_item& item) {return item.isbn() != i->isbn(); });
		cout << accumulate(i, e,Sales_item(i->isbn()))<<" ";

	}
}

