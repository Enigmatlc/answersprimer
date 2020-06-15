//Exercise 11.31: Write a program that defines a multimap of authors and
//their works.Use find to find an element in the multimap and erase that
//element.Be sure your program works correctly if the element you look for is
//not in the map.
#include<map>
#include<string>
#include<iostream>
using std::string;		using std::multimap;
using std::cout;		

int main() {
	multimap<string, string> mmp{ {"john","sosoos"},{"hello","joe"} };
	auto iter = mmp.find("john");
	mmp.erase(iter);
	iter=mmp.find("john");
	if (iter == mmp.end())
		cout << "deleted";
}