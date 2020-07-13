//Exercise 16.27: For each labeled statement explain what, if any,
//instantiations happen.If a template is instantiated, explain why; if not,
//explain why not.
#include<string>

template <typename T> class Stack { };
void f1(Stack<char>); // (a) not instantiated since the function is not called
class Exercise {
	Stack<double>& rsd; // (b)not instantiated references don't need instantiation
	Stack<int> si; // (c) instantiated instantiated
};
int main() {
	Stack<char>* sc; // (d) instantiated
	f1(*sc); // (e) instantiates Stack<char>+
	int iObj = sizeof(Stack< string >); // (f)  instantiated
}