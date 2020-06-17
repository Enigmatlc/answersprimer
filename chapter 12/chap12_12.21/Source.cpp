//Exercise 12.21: We could have written StrBlobPtr’s deref member as
//follows :

//std::string & deref() const
//{
//	return (*check(curr, "dereference past end"))[curr];
//}
//Which version do you think is better and why ?
//i think the version that we used in the program is better since its more clear to understand what is going on instead of creating a complicated return statement we should make it simple to understand.