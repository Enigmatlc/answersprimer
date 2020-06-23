//Exercise 13.58: Write versions of class Foo with print statements in their
//sorted functions to test your answers to the previous two exercises.


//13.56
#include<vector>
using std::vector;
#include<algorithm>
using std::sort;
#include<iostream>
using std::cout;	using std::endl;
//Exercise 13.56: What would happen if we defined sorted as :

//it would work since it specifies that it can only be called by an lvalue.
bool func(const int&, const int&);
class Foo {
	friend bool func(const int&, const int&);
public:
	Foo sorted()&& {
		cout << "sorted rvalue version" << endl;
		sort(data.begin(), data.end());
		return *this;
	}
	Foo sorted() const& {
		cout << "sorted const lvalue reference" << endl;
		vector<int> temp = data;
		sort(temp.begin(), temp.end());
		return *this;
	}
	// Comp is type alias for the function type (see § 6.7 (p. 249))
	// that can be used to compare int values
	using Comp = bool(const int&, const int&);
	Foo sorted(Comp*) {
		cout << "bool(cosnt int&,const int&)" << endl;
		sort(data.begin(), data.end());
		return *this;
	} // ok: different parameter list
	Foo sorted(Comp*) const { cout << "bool(const int&,cosnt int&) cosnt" << endl; 
	vector<int> temp = data;
	sort(temp.begin(), temp.end());
	return *this;
	} // ok: neither version is reference qualified
private:
	vector<int>data;
};
Foo func() { return Foo(); }
Foo &func(Foo& s) { return s; }

int main() {
	Foo item;
	int i = 0, j = 0;
	item.sorted();//calls lvalue
	func().sorted();//calls rvalue
	func(item).sorted();//calls lvalue
