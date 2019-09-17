//exercise 6.46: would it be possible to define isshorter as a constexpr ?
//if so, do so.if not, explain why not.

//bool isShorter(const string& s1, const string& s2)
//{
//	return s1.size() < s2.size();
//}

//The function can be declared as a constexpr, but it depends on its arguments if the function returns a constexpr or is implicitly converted to inline.
