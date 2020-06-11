//Exercise 10.4: Assuming v is a vector<double>, what, if anything, is
//wrong with calling accumulate(v.cbegin(), v.cend(), 0) ?

#include<vector>
#include<numeric>
#include<iostream>
using std::vector;		using std::accumulate;

using std::cout;		using std::endl;

int main() {
	vector<double> vec{ 1.1,1.2,3.4,6.2 };
	double acc = accumulate(vec.cbegin(), vec.cend(), 0);
	cout << acc;
}
//the result will be trancated since we will be adding to the 0 that is being sent in the third arguement.