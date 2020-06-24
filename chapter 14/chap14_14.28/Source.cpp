//Exercise 14.28: Define addition and subtraction for StrBlobPtr so that
//these operators implement pointer arithmetic(§ 3.5.3, p. 119).

StrBlobPtr StrBlobPtr::operator+(size_t n) const {
	StrBlobPtr ret = *this;
	ret += n;
	return ret;
}

StrBlobPtr StrBlobPtr::operator-(size_t n) const {
	StrBlobPtr ret = *this;
	ret -= n;
	return ret;
}