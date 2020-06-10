//Exercise 9.44: Rewrite the previous function using an index and replace.

#include<string>
#include<ctype.h>
#include<iostream>
using std::string;	using std::endl;
using std::cout;

void replace(string& s, string oldVal, string newVal) {

	string temp;
	string::size_type i= 0;

	while (i != s.size()) {
		if ((!std::isspace(s[i])) && (i < s.size())) {
			temp.push_back(s[i]);
		}
		else if (!temp.empty() && std::isspace(s[i])) {
			if (temp == oldVal) {
				s.replace(i - temp.size(), i, newVal);
			}
			temp.clear();
		}
		i++;
	}
	if (temp == oldVal) {
		int num = temp.size();
		s.replace(s.size() - temp.size(), s.size(), newVal);
	}
}
int main() {
	string s = "this is a simple test";
	replace(s, "test", "so");
	cout << s << endl;
}