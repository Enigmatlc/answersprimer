#include"LambdasLike.h"
#include<vector>
#include<algorithm>
#include<iostream>

using std::vector;		using std::replace_if;
using std::replace;		using std::cout;

int main() {
	vector<int> vec{4, 2, 3, 3, 4, 4, 5, 6, 7, 8, 9, 0, 10};
	LambdasLike object;
	object.i = 4;
	replace_if(vec.begin(), vec.end(), object, 99);
	for (auto c : vec)
		cout << c << " ";

}