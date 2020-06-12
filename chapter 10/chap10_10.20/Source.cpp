//Exercise 10.20: The library defines an algorithm named count_if.Like
//find_if, this function takes a pair of iterators denoting an input range and
//a predicate that it applies to each element in the given range.count_if
//returns a count of how often the predicate is true.Use count_if to rewrite
//the portion of our program that counted how many words are greater than
//length 6.
#include<vector>
#include<string>
#include<iostream>
#include<algorithm>

using std::count_if;	using std::vector;		
using std::string;		using std::cout;	
using std::endl;		using std::stable_partition;


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
	auto count = count_if(wc, words.end(), [sz](const string& str) {return str.size() >= sz; });
	cout << count << " " << make_plural(count, "word", "s")
		<< " of length " << sz << " or longer" << endl;
	// print words of the given size or longer, each one followed by a space
	for_each(wc, words.end(),
		[](const string& s) {cout << s << " "; });
	cout << endl;
}
int main() {
	vector<string> vec{ "stri","this","owowowowow","veryfunny","Kappa" };
	biggies(vec, 6);
}

