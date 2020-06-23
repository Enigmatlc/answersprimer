//Exercise 13.23: Compare the copy - control members that you wrote for the
//solutions to the previous section’s exercises to the code presented here.Be
//sure you understand the differences, if any, between your codeand ours.

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
	HasPtr item2 = item;
	item2.print();
	item.print();

}