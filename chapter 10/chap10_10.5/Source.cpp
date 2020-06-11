//Exercise 10.5: In the call to equal on rosters, what would happen if both
//rosters held C - style strings, rather than library strings ? nothing happens everything works correctly but if we decide to use char* instead of char then the program will not work since we are using const char* to initialize the containers.
#include<numeric>
#include<vector>
#include<iostream>
#include<list>
using std::list;
using std::cout;	using std::endl;
using std::vector;	using std::equal;
int main() {
	list<const char*>roster1{ "this","is","a","test" };
	vector<const char*>roster2{ "this","is","a","test","test" };
	bool equl=equal(roster1.cbegin(), roster1.cend(), roster2.cbegin());
	cout << equl << endl;
}