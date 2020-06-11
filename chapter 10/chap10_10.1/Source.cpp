//Exercise 10.1: The algorithm header defines a function named count
//that, like find, takes a pair of iterator sand a value.count returns a count
//of how often that value appears.Read a sequence of ints into a vector
//and print the count of how many elements have a given value.
#include<algorithm>
#include<vector>
#include<iostream>

using std::vector;		using std::count;
using std::cout;		using std::endl;
using std::cin;
int main() {
	vector<int> vec;
	int i;
	while (cin >> i) {
		vec.push_back(i);
	}
	i = 0;
	i=count(vec.begin(), vec.end(), 5);
	cout << "5 occurs : " << i << " times in the vector." << endl;
}