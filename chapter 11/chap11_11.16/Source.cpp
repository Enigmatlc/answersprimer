//Exercise 11.16: Using a map iterator write an expression that assigns a
//value to an element.
#include<map>
#include<iostream>

using std::map;		using std::cout;

int main() {
	map<int, int > ma{ {10,6} };
	auto iter = ma.cbegin();
	int i = (*iter).first, j = (*iter).second;
	cout << i << " " << j << "\n";
}