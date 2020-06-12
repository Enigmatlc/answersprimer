//Exercise 10.22: Rewrite the program to count words of size 6 or less using
//functions in place of the lambdas.
#include<vector>
#include<string>
#include<iostream>
#include<algorithm>
#include<functional>

using std::count_if;		using std::vector;
using std::string;			using std::cout;
using std::endl;			using std::stable_partition;
using std::bind;			using std::placeholders::_1;

void foreach(const string& str) {
	cout << str << " ";
}
bool strIsless(const string& str, vector<string>::size_type s) {
	return str.size() < s;
}

bool strIsgreater(const string& str, vector<string>::size_type s) {
	return str.size() >= s;
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
	auto wc = stable_partition(words.begin(), words.end(), bind(strIsless, _1, sz ));
	// compute the number of elements with size >= sz
	auto count = count_if(wc, words.end(), bind(strIsgreater,_1,sz));
	cout << count << " " << make_plural(count, "word", "s")
		<< " of length " << sz << " or longer" << endl;
	// print words of the given size or longer, each one followed by a space
	for_each(wc, words.end(),bind(foreach,_1));
	cout << endl;
}
int main() {
	vector<string> vec{ "stri","this","owowowowow","veryfunny","Kappa" };
	biggies(vec, 6);
}
