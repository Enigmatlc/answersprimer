//Exercise 13.17: Write versions of numbered and f corresponding to the
//previous three exercises and check whether you correctly predicted the
//output.
#include<iostream>

using std::cout;
using std::endl;
struct numbered
{
	numbered() :mysn(0) { cout << "default" << endl; };
	numbered(const numbered& item) :mysn(item.mysn + 1) { cout << "i ran" << endl; }
	int mysn;
};
void f(const numbered s) { cout << s.mysn << endl; }
int main() {
	numbered a, b = a, c = b;
	f(a); f(b); f(c);
}