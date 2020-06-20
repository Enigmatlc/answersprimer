//Exercise 13.27: Define your own reference - counted version of HasPtr.

#pragma once
#include<string>
#include<iostream>

class HasPtr {
public:
	//destructor
	~HasPtr() { 
		if (--*use == 0) {
			delete ps;
			delete use;
		}
	};
	//constructor
	HasPtr(const std::string& s = std::string()) :ps(new std::string(s)),use(new std::size_t(1)), i(0) { }
	//copy constructor
	HasPtr(const HasPtr& p) :ps(p.ps), i(p.i),use(p.use){ ++*use; }
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
	std::size_t* use;
};
HasPtr& HasPtr::operator=(HasPtr& item) {
	++*item.use;
	if (--*use == 0) {
		delete ps;
		delete use;
	}
	ps = item.ps;
	use = item.use;
	i = item.i;

	return *this;
}

