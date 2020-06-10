//Exercise 9.43: Write a function that takes three strings, s, oldVal, and
//newVal.Using iterators, and the insert and erase functions replace all
//instances of oldVal that appear in s by newVal.Test your function by
//using it to replace common abbreviations, such as “tho” by “though”and
//“thru” by “through”.
#include<string>
#include<ctype.h>
#include<iostream>
using std::string;	using std::endl;
using std::cout;

void replace(string& s, string oldVal, string newVal) {
	auto b = s.begin();
	string temp;
	auto begin = s.begin();

	while (b != s.end()) {
		if ((!std::isspace(*b)) && (b != s.end())) {
			temp.push_back(*b);
		}
		else if (!temp.empty() && std::isspace(*b)) {
			if (temp == oldVal) {
				s.replace(b-temp.size(), b, newVal);
			}
			temp.clear();
		}
			b++;
	}
	if (temp == oldVal) {
		int num = temp.size();
		s.replace(s.end() - temp.size(), s.end(), newVal);
	}
}
int main() {
	string s = "this is a simple test";
	replace(s, "this", "so");
	cout << s << endl;
}