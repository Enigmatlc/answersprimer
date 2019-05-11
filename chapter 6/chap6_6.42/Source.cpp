//Exercise 6.42: Give the second parameter of make_plural(§ 6.3.2, p.
//	224) a default argument of 's'.Test your program by printing singular and
//	plural versions of the words success and failure.
#include<string>
#include<iostream>
using std::string;	using std::endl;
using std::cout;
// return the plural version of word if ctr is greater than 1
string make_plural(size_t ctr, const string& word,const string& ending="s")
{
	return (ctr > 1) ? word + ending : word;
}
int main() {
	string str = "success";
	cout << make_plural(1, str, "es") << endl;
	cout << make_plural(2, str,"es") << endl;
	string str2 = "failure";
	cout << make_plural(1, str2, "es") << endl;
	cout << make_plural(2, str2) << endl;
}