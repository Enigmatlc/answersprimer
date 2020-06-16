//Exercise 12.8: Explain what if anything is wrong with the following function.
//bool b() {
//	int* p = new int;
//	// ...
//	return p;
//}
//the function allocates memory for a new int and it returns a pointer to int but the function is bool type. the person who calls the function will not be able to delete the memory reserved by p.