//Exercise 13.45: Distinguish between an rvalue reference and an lvalue
//reference.
int i = 42; //lvalue
int&& j = i + 1;//rvalue

//an lvalues have a persistent state 
//an rvalue points to a literal or temporary object.
