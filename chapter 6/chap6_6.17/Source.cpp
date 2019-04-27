//Exercise 6.17: Write a function to determine whether a string contains
//any capital letters.Write a function to change a string to all lowercase.Do
//the parameters you used in these functions have the same type ? If so, why ?
//If not, why not?
#include <cctype>
#include<iostream>
#include <string>

using std::string;	using std::isupper;
using std::cout;	using std::tolower;
using std::endl;
void makelower(string & s) {
	char c;
	for (string::size_type i = 0; i != s.length(); ++i)
	{
		c = s[i];
		s[i]= tolower(c);
	}
}
string hasupper(const string& s) {
	for (auto c : s) {
		if (isupper(c))
			return "Has capital letters.";

	}
	return "Does not have capital letters.";
}
int main() {
	string str = "Has UPPER";
	string str2 = "has not upper";
	string upr = "FUKDKDKFKF";
	cout << "Before call: " << str << endl;
	makelower(str);
	cout << "After Call : " << str << endl;
	cout << hasupper(upr) << endl;
	cout  << hasupper(str2) << endl;
}