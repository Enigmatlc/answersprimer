#pragma once
#include<memory>
//will be implemented the same way as the StrVec class
class String {
public:
	String() : String("") {}
	String(const String&);
	//move 
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
