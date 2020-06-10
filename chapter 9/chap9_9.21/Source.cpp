//Exercise 9.21: Explain how the loop from page 345 that used the return
//from insert to add elements to a list would work if we inserted into a
//vector instead.

//the program would work the same way but it will probably have a worst performance

#include<vector>
#include<iostream>
#include<string>
using std::vector;	using std::cin;
using std::cout;	using std::string;

int main() {
	vector <string> vec;
	string  word;
	auto iter = vec.begin();
	while (cin >> word)
		iter = vec.insert(iter, word);
	for (auto c : vec)
		cout << c << " ";
}