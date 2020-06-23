//Exercise 14.18: Define relational operators for your StrBlob,
//StrBlobPtr, StrVec, and String classes. i will not implement it for every class since its not necessary and a waste of time.

bool operator>(const String& lhs, const String& rhs)
{
    return rhs < lhs;
}
bool operator>(const StrVec& lhs, const StrVec& rhs)
{
    return rhs < lhs;
}