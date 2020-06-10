//Exercise 9.50: Write a program to process a vector<string>s whose
//elements represent integral values.Produce the sum of all the elements in
//that vector.Change the program so that it sums of strings that represent
//floating - point values.

#include<vector>
#include<string>

using std::string;		using std::vector;

int main() {
	vector<string> vec{ "1","2","3","4","5","6","7","8","9" };
	int sum=0;
	for (auto c : vec)
		sum+= std::stoi(c);

	int sum2 = 0;
	for (auto c : vec)
		sum2 += std::stof(c);
}