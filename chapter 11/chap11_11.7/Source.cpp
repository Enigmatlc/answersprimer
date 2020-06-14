//Exercise 11.7: Define a map for which the key is the family’s last name and
//the value is a vector of the children’s names.Write code to add new
//families and to add new children to an existing family.
#include<map>
#include<vector>
#include<string>
#include<iostream>
using std::cin;		using std::cout;
using std::map;		using std::vector;
using std::string;	using std::endl;
void addChildren(map<string, vector<string>>& m,string family) {
	string children;
	while (cin >> children) {
		m[family].push_back(children);
	}
}
void addFamily(map<string, vector<string>>& m) {
	string family;
	cin >> family;
		m[family];

}
int main() {
	map<string, vector<string>> family;
	addFamily(family);
	addChildren(family, "Hello");
	for (const auto& c : family) {

		for (const auto& j : c.second) {
			cout << c.first << " "<< j << endl;
		}
	}
}