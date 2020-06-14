//Exercise 11.8: Write a program that stores the excluded words in a vector
//instead of in a set.What are the advantages to using a set ?
//we cant easily compare keys with vectors as we can do with sets instead i have to call the find algorithm to find if the word exist inside the vector.
#include<string>
#include<map>
#include<set>
#include<iostream>
#include<vector>
#include<algorithm>
using std::find_if;
using std::string;	using std::map;
using std::set;		using std::cin;
using std::vector;	using std::cout;
int main() {
	// count the number of times each word occurs in the input
	map<string, size_t> word_count; // empty map from string to size_t
	vector<string> exclude = { "The", "But", "And", "Or", "An", "A",
	"the", "but", "and", "or", "an",
	"a" };
	string word;
	while (cin >> word)
		// count only words that are not in exclude
		if (find(exclude.begin(),exclude.end(),word) == exclude.end())
			++word_count[word]; // fetch and increment the counter for word
	for (auto c : word_count)
		cout << c.first << " " << c.second << "\n";
}