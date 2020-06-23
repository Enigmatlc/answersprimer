#pragma once
//Exercise 14.16: Define equality and inequality operators for your StrBlob
//(§ 12.1.1, p. 456), StrBlobPtr(§ 12.1.6, p. 474), StrVec(§ 13.5, p.
//	526), and String(§ 13.5, p. 531) classes.
//bool operator==(const StrBlob& rhs, const StrBlob& lhs) {
//	return rhs->data == lhs->data;
//}
//
//bool operator==(const StrBlobPtr& rhs, const StrBlobPtr& lhs) {
//	return rhs.wptr == lhs.wptr;
//}
//bool operator==(const StrVec& rhs, const StrVec& lhs) {
//	return rhs.elements == lhs.elements && rhs.first_free == lhs.frist_free && rhs.cap == lhs.cap;
//}
//bool operator==(const String& rhs, const String& lhs) {
//	return rhs.elements == lhs.elements && rhs.first_free == lhs.frist_free;
//}
//
//
//
//bool operator!=(const StrBlob& rhs, const StrBlob& lhs) {
//	return !(rhs == lhs);
//}
//
//bool operator!=(const StrBlobPtr& rhs, const StrBlobPtr& lhs) {
//	return !(rhs == lhs);
//}
//bool operator!=(const StrVec& rhs, const StrVec& lhs) {
//	return !(rhs == lhs);
//}
//bool operator!=(const StrVec& rhs, const StrVec& lhs) {
//	return !(rhs==lhs);
//}
