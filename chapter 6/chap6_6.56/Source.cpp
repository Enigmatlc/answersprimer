//Exercise 6.56: Call each element in the vector and print their result.
#include<vector>
#include<iostream>

using std::vector;	using std::cout;
using std::endl;


int fadd(int, int);
int fsub(int, int);
int fmul(int, int);
int fdiv(int, int);
using FP =int(*)(int, int);

int main() {
	vector<FP> vec;
	vec.push_back(fadd);
	vec.push_back(fsub);
	vec.push_back(fmul);
	vec.push_back(fdiv);
	cout << "add: " << vec[0](1, 2) << endl;
	cout << "subtract: " << vec[1](3, 2) << endl;
	cout << "multiply: " << vec[2](2, 2) << endl;
	cout << "divide: " << vec[3](4, 2) << endl;
	cout << "test" << vec[0];


}
int fadd(int a, int b) {
	return a + b;
}
int fsub(int a, int b) {
	return a - b;
}
int fmul(int a, int b) {
	return a * b;
}
int fdiv(int a, int b) {
	return a / b;
}