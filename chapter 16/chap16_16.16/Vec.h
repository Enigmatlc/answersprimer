#pragma once
#include<memory>
#include<string>
#include<utility>

template<typename T>
class Vec
{
public:
	Vec() :elements(nullptr), first_free(nullptr), cap(nullptr) {}
	Vec(const Vec&);
	Vec& operator=(const Vec&);
	~Vec();
	void push_back(const T&);
	size_t size() const { return first_free - elements; }
	size_t capacity()const { return cap - elements; }
	T* begin()const { return elements; }
	T* end()const { return first_free; }

private:
	static std::allocator<std::string> alloc;
	void chk_n_alloc() { if (size() == capacity())reallocate(); }
	std::pair<T, T> alloc_n_copy(const T*, const T*);
	void free();
	void reallocate();
	T* elements;
	T* first_free;
	T* cap;
};

