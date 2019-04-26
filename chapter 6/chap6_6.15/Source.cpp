//Exercise 6.15: Explain the rationale for the type of each of find_char’s
//parameters In particular, why is s a reference to const but occurs is a
//plain reference ? Why are these parameters references, but the char
//parameter c is not? What would happen if we made s a plain reference ?
//What if we made occurs a reference to const ?

//string::size_type find_char(const string& s, char c,string::size_type& occurs){
//	auto ret = s.size(); // position of the first occurrence, if any
//	occurs = 0; // set the occurrence count parameter
//	for (decltype(ret) i = 0; i != s.size(); ++i) {
//		if (s[i] == c) {
//			if (ret == s.size())
//				ret = i; // remember the first occurrence of c
//			++occurs; // increment the occurrence count
//		}
//	}
//	return ret; // count is returned implicitly in occurs
//}

//why is s a reference to const but occurs is a plain reference ?
//because s is not supposed to be changed, and occurs is used to keep count.

//Why are these parameters references, but the char parameter c is not?

//because c is  'a' constant

//What would happen if we made s a plain reference ? 
//it could be changed by the function

//What if we made occurs a reference to const ?
//it would not be changed


