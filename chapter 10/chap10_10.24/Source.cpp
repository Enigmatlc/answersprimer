//Exercise 10.24: Use bind and check_size to find the first element in a
//vector of ints that has a value greater than the length of a specified
//string value.
#include<functional>
#include<vector>
#include<string>
#include<algorithm>
#include<iostream>

using std::vector;			using std::string;
using std::bind;			using std::cout;
using std::endl;			using std::find_if;
using std::placeholders::_1;

bool check_size(const string& s, string::size_type sz)
{
	return s.size() < sz;
}
int main() {
	vector<int> vec{ 1,2,3,4,5,6,7,8,9,10 };
	string str={ "this" };
	auto w = find_if(vec.begin(), vec.end(), bind(check_size, str,_1 ));
	cout << *w;
}
