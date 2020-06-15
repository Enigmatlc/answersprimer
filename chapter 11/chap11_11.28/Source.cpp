//Exercise 11.28: Define and initialize a variable to hold the result of calling
//find on a map from string to vector of int.
#include<iostream>
#include<vector>
#include<map>
#include<string>

using std::string;	using std::vector;
using std::map;		using std::cout;

int main() {
	map<string, vector<int>> mp{ {"test",{0,1,2,3,4}} };
	auto iter = mp.find("test");
	cout << iter->first << " " << (*iter).first->second[3];;


}