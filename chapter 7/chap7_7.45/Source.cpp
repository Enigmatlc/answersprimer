//Exercise 7.45: What if we defined the vector in the previous execercise to
//hold objects of type C ?
//it will not work since the class c has a member of type NoDefault thefore the class will have no way to know the type of NoDefault.
#include"NoDefault.h"
#include<vector>

using std::vector;

int main() {
	vector<c> vec(10);
}
