//Exercise 6.48: Explain what this loop does and whether it is a good use of
//assert :

//string s;
//while (cin >> s && s != sought) {} // empty body
//assert(cin);

//it reads one string at a time using cin while s is not equal to sought or it hits eof
//
//asserts ends the program if cin reached eof or one of the other flags is set, which means that the word being stored in sought was not found. The use of assert in this case is not good because its being used to replace the logic in the program.