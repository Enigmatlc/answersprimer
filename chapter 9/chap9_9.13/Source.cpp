//Exercise 9.13: How would you initialize a vector<double> from a
//list<int> ? From a vector<int> ? Write code to check your answers.
#include<iostream>
#include<vector>
#include<list>

using std::list;	using std::vector;
using std::cout;	using std::endl;

int main() {
	list<int> li{ 1,2,3,4,5 };
	vector<double> vec(li.begin(), li.end());
	vector<int> vec2{ 1,2,3,4,5 };
	vector<double>vec3(vec2.begin(), vec2.end());

	for (auto c : vec)
		cout << c << " ";
	cout << endl;
	for (auto c : vec3)
		cout << c << " ";
	
}