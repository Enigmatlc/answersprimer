//Exercise 12.1: How many elements do b1and b2 have at the end of this
//code ?
//StrBlob b1; b1 is empty
//{
//	StrBlob b2 = { "a", "an", "the" };
//	b1 = b2; b1 is a copy of b2
//	b2.push_back("about"); b2 contains { "a", "an", "the" ,"about"};
//}b2 is destroyed

//b1 contains { "a", "an", "the" ,"about" }; since strblob only contains a shared_ptr the objects that b2 pointed to also change the objects b1 points to as longs as they are shared.