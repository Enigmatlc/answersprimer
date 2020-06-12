//Exercise 10.13: The library defines an algorithm named partition that
//takes a predicate and partitions the container so that values for which the
//predicate is true appear in the first part and those for which the predicate is
//false appear in the second part.The algorithm returns an iterator just past
//the last element for which the predicate returned true.Write a function that
//takes a string and returns a bool indicating whether the string has five
//characters or more.Use that function to partition words.Print the elements
//that have five or more characters.
#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
using std::partition;		using std::cout;
using std::endl;			using std::vector;
using std::string;
bool strHasfivechars(const string& str) {
	return str.size() < 5;
}
int main() {
	vector<string> vec{ "this","has","no","words","greater","amazing","Pepega" };
	auto iter =partition(vec.begin(), vec.end(), strHasfivechars);
	while (iter < vec.end())
	{
		cout << *iter << " ";
		++iter;
	}
}