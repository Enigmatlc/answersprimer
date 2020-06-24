#pragma once
#include<string>

class StrBlobPtr;
class PtrToStrBlob {
public:
	PtrToStrBlob():ptr(nullptr){}
	PtrToStrBlob(StrBlobPtr& s):ptr(&s){}

	StrBlobPtr& operator*()const {
		return *(this->ptr);
	}
	StrBlobPtr* operator->()const {
		return &this->operator*();
	}

private:
	StrBlobPtr* ptr;
};