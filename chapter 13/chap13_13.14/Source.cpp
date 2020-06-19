//Exercise 13.14: Assume that numbered is a class with a default constructor
//that generates a unique serial number for each object, which is stored in a
//data member named mysn.Assuming numbered uses the synthesized copycontrol
//membersand given the following function :
//
//void f(numbered s) { cout << s.mysn << endl; }
//what output does the following code produce ?
//Click here to view code image
//C++ Primer, Fifth Edition
//numbered a, b = a, c = b;
//f(a); f(b); f(c);

//they will contain the same serial number(serial number from a) since the assignment operator will override the mysn member.