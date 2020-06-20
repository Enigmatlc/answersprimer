//Exercise 13.22: Assume that we want HasPtr to behave like a value.That
//is, each object should have its own copy of the string to which the objects
//point.We’ll show the definitions of the copy - control members in the next
//section.However, you already know everything you need to know to
//implement these members.Write the HasPtr copy constructor and copy assignment
//operator before reading on.
#include<string>
#include<iostream>

class HasPtr {
public:
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
	void print() {
		std::cout << "pointer address: " << ps << std::endl;
	}
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
int main() {
	HasPtr item;
	item.change("name", 10);
	HasPtr item2=item;
	item2.print();
	item.print();

}