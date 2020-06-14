//Exercise 11.4: Extend your program to ignore case and punctuation.For
//example, “example.” “example, ”and “Example” should all increment the same
//counter.
#include<string>
#include<map>
#include<set>
#include<iostream>
#include<ctype.h>
using std::ispunct;	using std::tolower;
using std::string;	using std::map;
using std::set;		using std::cin;
using std::isupper;	using std::cout;
using std::endl;
int main() {
	// count the number of times each word occurs in the input
	map<string, size_t> word_count; // empty map from string to size_t
	set<string> exclude = { "The", "But", "And", "Or", "An", "A",
	"the", "but", "and", "or", "an",
	"a" };
	string word;

	while (cin >> word) {
		// count only words that are not in exclude
		auto iter = 0;
		while (iter < word.size()-1)
		{
			//cout << " Before: " << word << " ";
			if (ispunct(word[iter])) {
				word=word.erase(iter);

			}
			if (isupper(word[iter]))
				word[iter] = tolower(word[iter]);
			//cout << " After: " << word << endl;
			++iter;
		}
		if (exclude.find(word) == exclude.end())
			++word_count[word]; // fetch and increment the counter for word

	}
	for (auto c : word_count)
		cout << c.first << " " << c.second << endl;

}