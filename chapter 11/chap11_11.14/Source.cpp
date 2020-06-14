//Exercise 11.14: Extend the map of children to their family name that you
//wrote for the exercises in § 11.2.1 (p. 424) by having the vector store a
//pair that holds a child’s name and birthday.
#include<map>
#include<vector>
#include<string>
#include<iostream>
#include<utility>
using std::cin;		using std::cout;
using std::map;		using std::vector;
using std::string;	using std::endl;
using std::pair;
void addChildren(map<string, vector<pair<string, int>>>& m, string family,string name,int age) {
	string children;
	while (cin >> children) {
		m[family].push_back({ name,age });
	}
}
void addFamily(map<string, vector<pair<string,int>>>& m) {
	string family;
	cin >> family;
	m[family];

}
int main() {
	map<string, vector<pair<string, int>>> family;
	addFamily(family);
	addChildren(family, "hello","megan",13);
	for (const auto& c : family) {

		for (const auto& j : c.second) {
			cout << c.first << " " << j.first <<" "<<j.second << endl;
		}
	}
}