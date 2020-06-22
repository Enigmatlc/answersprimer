#include"String.h"
#include<algorithm>
#include<iostream>

std::pair<char*, char*> String::alloc_n_copy(const char* a, const char* b) {
	auto temp = alloc.allocate(b - a);
	return{ temp,std::uninitialized_copy(a,b,temp) };
}
void String::range_initializer(const char* first, const char* last)
{
	auto newstr = alloc_n_copy(first, last);
	elements = newstr.first;
	last_element = newstr.second;
}
String::String(const char* s)
{
	char* sl = const_cast<char*>(s);
	while (*sl) ++sl;
	range_initializer(s, ++sl);
}
String::String(const String& rhs)
{
	std::cout << "copy constructor" << std::endl;
	range_initializer(rhs.elements, rhs.last_element);
}
void String::free() {
	if (elements) {
		std::for_each(elements, last_element, [this](char& ch) {alloc.destroy(&ch); });
		alloc.deallocate(elements, last_element - elements);
	}

}
String::~String() {
	free();
}
String& String::operator=(const String& rhs) {
	auto newdata = alloc_n_copy(rhs.elements, rhs.last_element);
	free();
	elements = newdata.first;
	last_element = newdata.second;
	std::cout << "copy assignemnt operator" << std::endl;

	return *this;
}
std::ostream& operator<<(std::ostream& os, const String& item) {
	auto temp = item;
	while (temp.elements != temp.last_element)
	{
		os << temp.elements++;
	}
	return os;
}