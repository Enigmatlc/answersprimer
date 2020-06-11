//Exercise 10.2: Repeat the previous program, but read values into a list of
//strings.
#include<algorithm>
#include<list>
#include<iostream>
#include<string>

using std::list;		using std::count;
using std::cout;		using std::endl;
using std::cin;			using std::string;
int main() {
	list<string> vec;
	string i;
	while (cin >> i) {
		vec.push_back(i);
	}
	i = "";
	i = count(vec.begin(), vec.end(), "Hello");
	cout << "Hello occurs : " << i << " times in the vector." << endl;
}