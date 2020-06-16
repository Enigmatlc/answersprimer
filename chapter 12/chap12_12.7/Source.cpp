//Exercise 12.7: Redo the previous exercise, this time using shared_ptr.
#include<vector>
#include<iostream>
#include<memory>

using std::make_shared;		using std::cout;
using std::cin;			using std::shared_ptr;
using std::vector;

shared_ptr<vector<int>> func() {
	
	return shared_ptr<vector<int>>(make_shared<vector<int>>());
}
shared_ptr<vector<int>> pass(shared_ptr<vector<int>> vec) {//could make it void but i dont feel like making multiple calls from main
	int i;
	while (cin >> i)
		vec->push_back(i);
	return vec;
}
void print(shared_ptr<vector<int>> vec) {

	for (const auto c : *vec)
		cout << c << " ";

}
int main() {
	print(pass(func()));
}
