//Exercise 13.57: What if we defined sorted as :
//
//Foo Foo::sorted() const& { return Foo(*this).sorted(); }
//it would still be legal because we are creating a temporary object of rvalue type that calls sorted()&&.

class Foo {
public:
	Foo sorted()&&;
	Foo sorted() const& { return Foo(*this).sorted(); } 
	// Comp is type alias for the function type (see § 6.7 (p. 249))
	// that can be used to compare int values
	using Comp = bool(const int&, const int&);
	Foo sorted(Comp*); // ok: different parameter list
	Foo sorted(Comp*) const; // ok: neither version is reference qualified
};
int main() {

}