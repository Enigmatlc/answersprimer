//Exercise 13.46: Which kind of reference can be bound to the following
//initializers ?
int f(); 
#include<vector>
using std::vector;

vector<int> vi(100);
int && r1 = f(); //rvalue
int & r2 = vi[0]; //lvalue
int & r3 = r1;	//lvalue
int && r4 = vi[0] * f(); //rvalue