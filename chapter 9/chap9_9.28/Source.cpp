//Exercise 9.28: Write a function that takes a forward_list<string> and
//two additional string arguments.The function should find the first string
//and insert the second immediately following the first.If the first string is
//not found, then insert the second string at the end of the list.

#include<forward_list>
#include<string>
#include<iostream>

using std::forward_list;	using std::string;
using std::cout;			using std::endl;


void func(forward_list < string> &fli, string str, string str2) {
	auto before = fli.before_begin();
	auto after = fli.begin();
	bool found  = false;
	while (after != fli.end()) {
		if (*after == str) {
			after = fli.insert_after(after, str2);
			found = true;
		}
		else
			after++;
	}
	
	if (!found) {
		auto before_end = fli.before_begin();
		for (auto lul : fli)
			++before_end;
		fli.insert_after(before_end, str2);
	}
}
int main() {

	forward_list<string> fli{ "this","ok?" };
	func(fli, "this", "sucks.");

	for (auto c : fli)
		cout << c << " ";


}