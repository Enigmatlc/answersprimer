#include<utility>
#include<memory>
#include<string>
#include"Vec.h"

using std::pair;	using std::uninitialized_copy;

template<typename T>
void Vec<T>::push_back(const T& s) {
	chk_n_alloc();//ensure that there is room for another element
	//construct a copy of s in the element to which first_free points
	alloc.construct(first_free++, s);
}
template<typename T>
std::pair<T, T> Vec<T>::alloc_n_copy(const T* b , const T* e){
	auto data = alloc.allocate(e - b);//allocates space to hold as many elements as there are in the range. Returns an iterator to the beginning of the range of raw memory
	//initialize and return a pair constructed from data and the value returned by uninitialized_copy
	return{ data,uninitialized_copy(b,e,data)/*returns an iterator one past the last element copied*/ };
}

template<typename T>
void Vec<T>::free() {//removes all the elements in the object and frees the memory by calling deallocate.
	if (elements) {
		for (auto p = first_free; p != elements;) {
			alloc.destroy(--p);
		}
		alloc.deallocate(elements, cap - elements);
	}

}
template<typename T>
Vec<T>::Vec(const Vec<T>& s) {
	auto newdata = alloc_n_copy(s.begin(), s.end());
	elements = newdata.first;
	first_free = cap = newdata.second;
}

template<typename T>
Vec<T>::~Vec() {
	free();
}

template<typename T>
Vec<T>& Vec<T>::operator=(const Vec<T>& rhs) {
	auto data = alloc_n_copy(rhs.begin(), rhs.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this;
}


template<typename T>
void Vec<T>::reallocate() {//if the cap is reached we have to reallocate the items to a new memory location
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