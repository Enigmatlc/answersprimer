//Exercise 11.20: Rewrite the word - counting program from § 11.1 (p. 421) to
//use insert instead of subscripting.Which program do you think is easier to
//writeand read ? Explain your reasoning.
// count the number of times each word occurs in the input
#include<map>
#include<string>
#include<iostream>

using std::map;		using std::string;
using std::endl;	using std::cout;
using std::cin;
int main() {
	map<string, size_t> word_count; // empty map from string to size_t
	string word;
	while (cin >> word) {
		auto ret = word_count.insert({ word,1 });
		if (!ret.second)
			++(*ret.first).second;
	}

	for (const auto& w : word_count) // for each element in the map
	// print the results
		cout << w.first << " occurs " << w.second
		<< ((w.second > 1) ? " times" : " time") << endl;
}