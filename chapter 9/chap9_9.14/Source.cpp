//Exercise 9.14: Write a program to assign the elements from a list of
//char* pointers to C - style character strings to a vector of strings.
#include<string>
#include<vector>
#include<list>
#include<iostream>

using std::vector;		using std::list;
using std::cout;		using std::endl;
using std::string;


int main() {
	std::list<const char*> lc{ "this","problem","is","very","stupid" };//have to use const char* instead of char because the strings in being stored are const for the assignment to be done correctly i would have to read the strings from cin.
	std::vector<std::string> vc(lc.begin(), lc.end());


	for (auto c : vc)
		cout << c << " ";



}