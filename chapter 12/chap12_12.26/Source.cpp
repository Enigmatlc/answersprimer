#include<string>
#include<memory>
#include<iostream>
using std::string;		using std::allocator;
using std::cin;			using std::cout;
int main() {
	int n = 10;
	allocator<string> alloc;
	auto p = alloc.allocate(n);
	string s;
	string* q=p;
	
	alloc.construct(p);
	while (cin >> s && q != p + n)
		alloc.construct(q++, s);
		
	const size_t size = q - p; // remember how many strings we read
		// use the array

	alloc.deallocate(p, n); // p points to an array; must remember to use delete[]
}