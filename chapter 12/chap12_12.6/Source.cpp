//Exercise 12.6: Write a function that returns a dynamically allocated vector
//of ints.Pass that vector to another function that reads the standard input
//to give values to the elements.Pass the vector to another function to print
//the values that were read.Remember to delete the vector at the
//appropriate time.
#include<vector>
#include<iostream>
using std::vector;		using std::cout;
using std::cin;
vector<int>* func() {
	return new vector<int>;
}
vector<int>* pass(vector<int>* vec) {
	int i;
	while (cin >> i)
		vec->push_back(i);
	return vec;
}
void print(vector<int>* vec) {

	for (const auto c : (*vec))
		cout << c << " ";
	delete vec;
}
int main() {
	print(pass(func()));
}
