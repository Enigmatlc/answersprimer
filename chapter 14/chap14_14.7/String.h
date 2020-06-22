#pragma once
#include<memory>
#include<iostream>

//will be implemented the same way as the StrVec class
class String {
	friend std::ostream& operator<<(std::ostream&, const String&);
public:
	String() : String("") {}
	String(const String&);
	//move constructor
	String(String&& rhs)noexcept :elements(rhs.elements), last_element(rhs.last_element) { rhs.elements = rhs.last_element = nullptr; }

	//copy assignment move operator
	String& operator=(String&& rhs) noexcept {
		if (this != &rhs) {
			free();
			elements = rhs.elements;
			last_element = rhs.last_element;
			rhs.elements = rhs.last_element = nullptr;

		}
		return *this;
	}

	String(const char*);
	~String();

	String& operator=(const String&);

	const char* c_str() const { return elements; }

	size_t size() const { return last_element - elements; }

private:
	std::allocator<char> alloc;

	void range_initializer(const char*, const char*);

	std::pair<char*, char*> alloc_n_copy(const char*, const char*);

	void free();

	char* elements;

	char* last_element;
};

