//Exercise 9.47: Write a program that finds each numeric character and then
//each alphabetic character in the string "ab2c3d7R4E6".Write two
//versions of the program.The first should use find_first_of, and the
//second find_first_not_of.
#include<string>
#include<iostream>

using std::cout;
using std::string;
using std::endl;
void fin_first(string str) {
	string numbers = "123456789";

	string::size_type i = str.find_first_of(numbers);
	//find numbers
	while (i != string::npos) {
		cout << str[i];
		i = str.find_first_of(numbers,i+1);
	}
	cout << endl;
	string alphabet = "abcdefghijklmnopqrstuvxyzABCDEFGHIJKLMNOQRSTUVWXYZ";
	string::size_type j = str.find_first_of(alphabet);
	//find characters
	while (j != string::npos) {
		cout << str[j];
		j = str.find_first_of(alphabet, j+1);
	}
}
void fin_not(string str) {
	string numbers = "123456789";

	string::size_type i = str.find_first_not_of(numbers);
	//find numbers
	while (i != string::npos) {
		cout << str[i];
		i = str.find_first_not_of(numbers, i + 1);
	}
	cout << endl;
	string alphabet = "abcdefghijklmnopqrstuvxyzABCDEFGHIJKLMNOQRSTUVWXYZ";
	string::size_type j = str.find_first_not_of(alphabet);
	//find characters
	while (j != string::npos) {
		cout << str[j];
		j = str.find_first_not_of(alphabet, j + 1);
	}
	cout << endl;
}
int main() {
	fin_first("ab2c3d7R4E6");
	cout << endl;
	cout << "not of" << endl;	
	fin_not("ab2c3d7R4E6");
}