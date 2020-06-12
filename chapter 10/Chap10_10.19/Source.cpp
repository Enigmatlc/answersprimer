//Exercise 10.19: Rewrite the previous exercise to use stable_partition,
//which like stable_sort maintains the original element order in the
//partitioned sequence.
#include<vector>
#include<string>
#include<iostream>
#include<algorithm>
using std::find_if;		using std::find;
using std::vector;		using std::string;
using std::cout;		using std::endl;
using std::partition;	using std::stable_partition;
void elimDups(vector<string>& words)
{
	// sort words alphabetically so we can find the duplicates
	sort(words.begin(), words.end());
	// unique reorders the input range so that each word appears once in the
	// front portion of the range and returns an iterator one past the unique range
	auto end_unique = unique(words.begin(), words.end());
	// erase uses a vector operation to remove the non-unique elements
	words.erase(end_unique, words.end());
}
// return the plural version of word if ctr is greater than 1
string make_plural(size_t ctr, const string& word,
	const string& ending)
{
	return (ctr > 1) ? word + ending : word;
}
void biggies(vector<string>& words,
	vector<string>::size_type sz)
{
	elimDups(words); // put words in alphabetical order and remove duplicates
		// sort words by size, but maintain alphabetical order for words of the same size
	stable_sort(words.begin(), words.end(),
		[](const string& a, const string& b)
		{ return a.size() < b.size(); });
	// get an iterator to the first element whose size() is >= sz
	auto wc = stable_partition(words.begin(), words.end(), [sz](const string& str1) {return str1.size() < sz; });
	// compute the number of elements with size >= sz
	auto count = words.end() - wc;
	cout << count << " " << make_plural(count, "word", "s")
		<< " of length " << sz << " or longer" << endl;
	// print words of the given size or longer, each one followed by a space
	for_each(wc, words.end(),
		[](const string& s) {cout << s << " "; });
	cout << endl;
}
int main() {
	vector<string> vec{ "string","thisis","owowowowow","veryfunny","Kappa" };
	biggies(vec, 7);
}
