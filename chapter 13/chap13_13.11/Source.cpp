//Exercise 13.11: Add a destructor to your HasPtr class from the previous
//exercises.
#include<string>

class HasPtr {
public:
	//destructor
	~HasPtr() {};
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
	std::string* temp = new std::string(*item.ps);
	delete ps;
	ps = temp;

	i = item.i;
	return *this;
}