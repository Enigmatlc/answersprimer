//Exercise 10.3: Use accumulate to sum the elements in a vector<int>.
#include<numeric>
#include<vector>
#include<iostream>

using std::cout;		using std::endl;
using std::vector;		using std::accumulate;
int main() {
	vector<int> vec{ 1,2,3,4,5,6,7,8,9,10 };
	int i = accumulate(vec.begin(), vec.end(), 0);
	cout << i;
}