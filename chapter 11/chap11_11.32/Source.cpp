//Exercise 11.32: Using the multimap from the previous exercise, write a
//program to print the list of authors and their works alphabetically.
#include<map>
#include<string>
#include<iostream>
#include<set>
using std::string;		using std::multimap;
using std::cout;		using std::map;			
using std::multiset;
int main() {
	multimap<string, string> mmp{ {"john","sosoos"},{"hello","abe"},{"hello","bee"},{"hello","joe"},{"hello","dee"},{"hello","cee"} };
	map<string, multiset<string>> mp;
	for (const auto& c : mmp)
		mp[c.first].insert(c.second);
	for (const auto& c : mp) {
		cout << "author: " << c.first << " Books: ";
		for (const auto& j : c.second)
			cout << j<<" ";
	}


}