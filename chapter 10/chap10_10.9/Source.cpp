//Exercise 10.9: Implement your own version of elimDups.Test your
//program by printing the vector after you read the input, after the call to
//unique, and after the call to erase.
#include<algorithm>
#include<iostream>
#include<vector>
#include<string>

using std::vector;		using std::sort;
using std::unique;		using std::cout;
using std::string;		using std::endl;

void elimDups(vector<string>& vec) {
	sort(vec.begin(), vec.end());
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