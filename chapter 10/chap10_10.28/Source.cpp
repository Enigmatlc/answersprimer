//Exercise 10.28: Copy a vector that holds the values from 1 to 9 inclusive,
//into three other containers.Use an inserter, a back_inserter, and a
//front_inserter, respectively to add elements to these containers.Predict
//how the output sequence varies by the kind of inserter and verify your
//predictions by running your programs.
#include<vector>
#include<deque>
#include<list>
#include<forward_list>
#include<iostream>
#include<iterator>
#include<algorithm>

using std::vector;			using std::list;	
using std::deque;			using std::forward_list;
using std::copy;			using std::cout;
using std::inserter;		using std::back_inserter;
using std::front_inserter;	using std::endl;

int main() {
	vector<int> vec{ 1,2,3,4,5,6,7,8,9 };
	list<int> li;
	forward_list<int> fli;
	deque<int> de;
	copy(vec.begin(), vec.end(), inserter(li, li.begin()));
	cout << "list: ";
	for (auto c : li)
		cout << c << " ";
	copy(vec.begin(), vec.end(), back_inserter(de));
	cout << endl;
	cout << "deque: ";
	for (auto c : de)
		cout  << c << " ";
	copy(vec.begin(), vec.end(), front_inserter(fli));
	cout << endl;
	cout << "forward_list: ";
	for (auto c : fli)
		cout << c << " ";
}