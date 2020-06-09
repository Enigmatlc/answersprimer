//Exercise 9.11: Show an example of each of the six ways to create and
//initialize a vector.Explain what values each vector contains.

#include<vector>

using std::vector;
int main() {
	vector<int> f{ 1,2,3,4,5 };


	vector<int> vec(4,5); //5, 5, 5 ,5
	vector<int> vec2{ 1,2,3,4,5 };//5, 5, 5 ,5
	vector<int> vec3(vec2);//5, 5, 5 ,5
	vector<int> vec4(4);//0, 0, 0, 0
	vector<int> vec5;//has no values
	vector<int> vec6(f.begin(), f.end());//1,2,3,4,5
}