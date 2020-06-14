/*Exercise 11.23: Rewrite the map that stored vectors of children’s names
with a key that is the family last name for the exercises in § 11.2.1 (p. 424)
to use a multimap*/

#include<map>
#include<vector>
#include<string>
#include<iostream>
using std::cin;		using std::cout;
using std::multimap;		using std::vector;
using std::string;	using std::endl;


int main() {
	multimap<string, string> family;
	string fam, child;
	while (cin >> fam >> child)
		family.emplace(fam, child);
	for (const auto& c : family)
		cout << c.first << " " << c.second << " \n";
}