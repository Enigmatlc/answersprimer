
//StrVec implementation
#include<utility>
#include<memory>
#include<string>
#include"StrVec.h"

using std::string;		using std::pair;
using std::uninitialized_copy;


void StrVec::push_back(const string& s) {
	chk_n_alloc();//ensure that there is room for another element
	//construct a copy of s in the element to which first_free points
	alloc.construct(first_free++, s);
}
pair<string*, string*> StrVec::alloc_n_copy(const string* b, const string* e) {
	auto data = alloc.allocate(e - b);//allocates space to hold as many elements as there are in the range. Returns an iterator to the beginning of the range of raw memory
	//initialize and return a pair constructed from data and the value returned by uninitialized_copy
	return{ data,uninitialized_copy(b,e,data)/*returns an iterator one past the last element copied*/ };
}
void StrVec::free() {//removes all the elements in the object and frees the memory by calling deallocate.
	if (elements) {
		for (auto p = first_free; p != elements;) {
			alloc.destroy(--p);
		}
		alloc.deallocate(elements, cap - elements);
	}

}
StrVec::StrVec(const StrVec& s) {
	auto newdata = alloc_n_copy(s.begin(), s.end());
	elements = newdata.first;
	first_free = cap = newdata.second;
}
StrVec& StrVec::operator=(StrVec&& rhs) {
	if (this != &rhs) {
		free();
		elements = rhs.elements;
		first_free = rhs.first_free;
		cap = rhs.cap;
		rhs.elements = rhs.cap = rhs.first_free = nullptr;
	}
	return *this;
}
StrVec::~StrVec() {
	free();
}
StrVec& StrVec::operator=(const StrVec& rhs) {
	auto data = alloc_n_copy(rhs.begin(), rhs.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this;
}
void StrVec::reallocate() {//if the cap is reached we have to reallocate the items to a new memory location
	auto newcapacity = size() ? 2 * size() : 1;
	auto newdata = alloc.allocate(newcapacity);
	auto dest = newdata;
	auto elem = elements;
	for (size_t i = 0; i != size(); ++i)
	{
		alloc.construct(dest++, std::move(*elem++));
	}
	free();
	first_free = dest;
	cap = elements + newcapacity;
}
