//Exercise 10.36: Use find to find the last element in a list of ints with
//value 0.
#include<iostream>
#include<vector>
#include<algorithm>

using std::find;	using std::cout;
using std::vector;	
int main() {
	vector<int>vec {1, 2, 3, 4, 5, 6, 0, 4l, 3};
	auto iter=find(vec.rbegin(), vec.rend(),0);
	cout << *iter << " ";
}