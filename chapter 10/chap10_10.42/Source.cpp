//Exercise 10.42: Re implement the program that eliminated duplicate words
//that we wrote in § 10.2.3 (p. 383) to use a list instead of a vector.
#include<algorithm>
#include<iostream>
#include<list>
#include<string>

using std::list;		using std::sort;
using std::unique;		using std::cout;
using std::string;		using std::endl;

void elimDups(list<string>& vec) {
	vec.sort();
	auto end_unique = unique(vec.begin(), vec.end());
	vec.erase(end_unique, vec.end());
}
int main() {
	list<string> str{ "fox","jumps","over","quick","red","red","slow","the","the","turtle" };
	for (auto c : str)
		cout << c << " ";
	cout << endl;
	elimDups(str);
	for (auto c : str)
		cout << c << " ";
}