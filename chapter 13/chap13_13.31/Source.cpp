//Exercise 13.31: Give your class a < operator and define a vector of
//HasPtrs.Give that vector some elements and then sort the vector.
//Note when swap is called.
#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
class HasPtr {
public:
	friend void swap(HasPtr& rhs, HasPtr& lhs);
	friend bool operator<(const HasPtr&, const HasPtr&);
	//destructor
	~HasPtr() { delete ps; };
	//constructor
	HasPtr(const std::string& s = std::string()) :ps(new std::string(s)), i(0) { }
	//copy constructor
	HasPtr(const HasPtr& item) :ps(new std::string(*item.ps)), i(item.i) {}
	//assignment operator
	HasPtr& operator=(HasPtr& item);
	void change(std::string str, int b) {
		ps = new std::string(str);
		i = b;
	}
	//less than operator

	void print() {
		std::cout << "pointer address: " << ps << std::endl;
	}
	void swap(HasPtr& rhs)
	{
		using std::swap;
		swap(ps, rhs.ps);
		swap(i, rhs.i);
		std::cout << "called swap inside HasPtr" << std::endl;
	}
private:
	std::string* ps;
	int i;
};
HasPtr& HasPtr::operator=(HasPtr& item) {
	this->swap(item);
	return *this;
	return *this;
}
void swap( HasPtr& rhs,HasPtr& lhs) {
	auto temp = rhs;
	rhs = lhs;
	lhs = temp;

}
bool operator<(const HasPtr& item, const HasPtr& item2) {
	
	return *item.ps < *item2.ps;
}
