//Exercise 13.8: Write the assignment operator for the HasPtr class from
//exercise 13.5 in § 13.1.1 (p. 499).As with the copy constructor, your
//assignment operator should copy the object to which ps points.
#include<string>

class HasPtr {
public:

	HasPtr(const std::string& s = std::string()) :
		ps(new std::string(s)), i(0) { }
	//copy constructor
	HasPtr(const HasPtr& item) :ps(new std::string(*item.ps)), i(item.i) {}
	//assignment operator
	HasPtr& operator=(HasPtr& item);
private:
	std::string* ps;
	int i;
};
HasPtr& HasPtr::operator=(HasPtr& item) {
	std::string* temp=new std::string(*item.ps);
	delete ps;
	ps = temp;

	i = item.i;
	return *this;
}