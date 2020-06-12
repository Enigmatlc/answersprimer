//Exercise 10.25: In the exercises for § 10.3.2 (p. 392) you wrote a version
//of biggies that uses partition.Rewrite that function to use
//check_size and bind.
#include<vector>
#include<string>
#include<iostream>
#include<algorithm>
#include<functional>

using std::find_if;		using std::find;
using std::vector;		using std::string;
using std::cout;		using std::endl;
using std::placeholders::_1;

bool check_size(const string& s, string::size_type sz)
{
	return s.size() >= sz;
}

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
	auto wc = find_if(words.begin(), words.end(), bind(check_size, _1, sz));
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