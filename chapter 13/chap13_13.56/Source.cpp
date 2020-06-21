#include<vector>
using std::vector;
#include<algorithm>
using std::sort;
//Exercise 13.56: What would happen if we defined sorted as :

//it would work since it specifies that it can only be called by an lvalue.
class Foo {
public:
	Foo sorted()&&;
	Foo sorted() const&; // error: must have reference qualifier
	// Comp is type alias for the function type (see § 6.7 (p. 249))
	// that can be used to compare int values
	using Comp = bool(const int&, const int&);
	Foo sorted(Comp*); // ok: different parameter list
	Foo sorted(Comp*) const; // ok: neither version is reference qualified
};