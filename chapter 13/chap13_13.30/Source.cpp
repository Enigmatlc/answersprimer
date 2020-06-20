//Exercise 13.30: Write and test a swap function for your valuelike version of
//HasPtr.Give your swap a print statement that notes when it is executed.
#include<string>
#include<iostream>

class HasPtr {
	friend void swap(HasPtr& rhs, HasPtr& lhs);
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
void swap(HasPtr& rhs, HasPtr& lhs) {
	auto temp = rhs;
	rhs = lhs;
	lhs = temp;
	std::cout << "called" << std::endl;
}
int main() {
	HasPtr item;
	item.change("name", 10);
	HasPtr item2 = item;
	item2.print();
	item.print();
	swap(item, item2);
	item2.print();
	item.print();

}