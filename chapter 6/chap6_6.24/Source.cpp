//Exercise 6.24: Explain the behavior of the following function.If there are
//problems in the code, explain what they are and how you might fix them.
//
//void print(const int ia[10])
//{
//	for (size_t i = 0; i != 10; ++i)
//		cout << ia[i] << endl;
//}

//the array size is not necessary in the parameter
//it would be better to use const (&ai)[10]
void print(const int ia[10])
{
	for (size_t i = 0; i != 10; ++i)
		cout << ia[i] << endl;
}