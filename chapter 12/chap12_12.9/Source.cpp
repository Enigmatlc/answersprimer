//Exercise 12.9: Explain what happens in the following code :

//int* q = new int(42), *r = new int(100); allocates memory for two ints one holds the numeber 42 the other 100

//r = q;	the memory for r is not deleted and r now points to the same object a q

//auto q2 = make_shared<int>(42), r2 = make_shared<int>(100); creates two shared pointers of type int with values 42 and 100.

//r2 = q2; r2 now points to the same object as q2 and the memory that belonged to r2 is deleted since no pointers are connected to it.