//Exercise 11.12: Write a program to read a sequence of strings and ints,
//storing each into a pair.Store the pairs in a vector.
#include<vector>
#include<string>
#include<iostream>
#include<utility>
using std::vector;		using std::string;
using std::cout;		using std::endl;
using std::cin;			using std::pair;
using std::make_pair;
int main() {
	vector<pair<int, int>> vec;

	int p1, p2;
	while (cin >> p1>> p2) {

		vec.push_back({ p1,p2 });
		
	}
	for (auto c : vec)
		cout << c.first << " " << c.second << "\n";
}