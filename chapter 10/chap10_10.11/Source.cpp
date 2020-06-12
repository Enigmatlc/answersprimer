//Exercise 10.11: Write a program that uses stable_sort and isShorter
//to sort a vector passed to your version of elimDups.Print the vector to
//verify that your program is correct.

#include<algorithm>
#include<iostream>
#include<vector>
#include<string>

using std::vector;		using std::sort;
using std::unique;		using std::cout;
using std::string;		using std::endl;
using std::stable_sort;
bool isShorter(const string& s1, const string& s2) {
	return s1.size() < s2.size();
}

void elimDups(vector<string>& vec) {
	stable_sort(vec.begin(), vec.end(),isShorter);
	auto end_unique = unique(vec.begin(), vec.end());
	vec.erase(end_unique, vec.end());
}
int main() {
	vector<string> str{ "fox","jumps","over","quick","red","red","slow","the","the","turtle" };
	for (auto c : str)
		cout << c << " ";
	cout << endl;
	elimDups(str);
	for (auto c : str)
		cout << c << " ";
}