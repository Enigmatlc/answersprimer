//Exercise 12.17: Which of the following unique_ptr declarations are illegal
//or likely to result in subsequent program error ? Explain what the problem is
//with each one.

//int ix = 1024, *pi = &ix, *pi2 = new int(2048);
//typedef unique_ptr<int> IntP;

//(a)IntP p0(ix); illegal pi already points to ix and ix was not stored in dynamic memory.

//(b)IntP p1(pi); illegal same as above

//(c)IntP p2(pi2);legal but pi already points the same location so it can cause some issues

//(d)IntP p3(&ix); illegal same as 1 and 2

//(e)IntP p4(new int(2048));legal p4 points to an int with value 2048

//(f) IntP p5(p2.get());illegal unique pointers own the object they point to so two pointers cant have the same object.