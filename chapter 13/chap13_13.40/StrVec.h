//Exercise 13.40: Add a constructor that takes an
//initializer_list<string> to your StrVec class.
#pragma once
#include<memory>
#include<string>
#include<utility>
#include<initializer_list>
class StrVec {
public:
	StrVec() :elements(nullptr), first_free(nullptr), cap(nullptr) {}//the allocator member is default initialized
	StrVec(const StrVec&);//copy constructor
	StrVec(std::initializer_list<std::string> ini);
	StrVec& operator=(const StrVec&);//copy assignment operator
	~StrVec();//destructor
	void push_back(const std::string&);//copy the element
	size_t size()const { return first_free - elements; }//number of elements in StrVec
	size_t capcity()const { return cap - elements; }//capacity of StrVec
	std::string* begin()const { return elements; }//pointer to first element in StrVec
	std::string* end()const { return first_free; }//one past the last element
private:
	static std::allocator<std::string> alloc;//allocates elements
	void chk_n_alloc() { if (size() == capacity())reallocate(); }//used by functions that add elements to a StrVec
	std::pair<std::string*, std::string*> alloc_n_copy(const std::string*, const std::string*);//utilities used by the copy constructor, assignment operator, and destructor
	void free();//destroys the elements and free the space
	void reallocate();//get more space and copy the existing elements
	std::string* elements;//pointer to the first elements in the array
	std::string* first_free;//pointer to the first freee element in the array
	std::string* cap;//pointer to one past the end of the array

};
