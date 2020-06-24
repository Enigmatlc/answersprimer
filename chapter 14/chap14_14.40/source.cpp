// Exercise 14.40: Rewrite the biggies function from § 10.3.2 (p. 391) to
// use function-object classes in place of lambdas.
#include<functional>
using std::bind;        using std::placeholders::_1;
#include<vector>
#include<string>
#include<iostream>
#include<algorithm>
using std::find_if;		using std::find;
using std::vector;		using std::string;
using std::cout;		using std::endl;
class Replacement{
    public:
    Replacement()=default;

    //overloaded function call operator
    bool operator()(const string& a,const string& b){
        return a.size() < b.size();
    }
    bool operator()(const string& a,vector<string>::size_type sz){
        return a.size() >= sz;
    }
    void operator()(const string& a){
        cout<<a<<" ";
    }

};
void elimDups(vector<string>& words)
{
	// sort words alphabetically so we can find the duplicates
	sort(words.begin(), words.end());
	// unique reorders the input range so that each word appears once in the
	// front portion of the range and returns an iterator one past the unique range
	auto end_unique = unique(words.begin(), words.end());
	// erase uses a vector operation to remove the nonunique elements
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
		stable_sort(words.begin(), words.end(),Replacement());
	// get an iterator to the first element whose size() is >= sz
	auto wc = find_if(words.begin(),words.end(), bind(Replacement(),_1,sz));
	// compute the number of elements with size >= sz
	auto count = words.end() - wc;
	cout << count << " " << make_plural(count, "word", "s")
		<< " of length " << sz << " or longer" << endl;
	// print words of the given size or longer, each one followed by a space
	for_each(wc, words.end(),Replacement());
	cout << endl;
}
int main() {
	vector<string> vec{ "string","thisis","veryfunny","owowowowow","Kappa" };
	biggies(vec, 7);
}