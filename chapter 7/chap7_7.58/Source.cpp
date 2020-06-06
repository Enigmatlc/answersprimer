//Exercise 7.58: Which, if any, of the following static data member
//declarations and definitions are errors ? Explain why.

//// example.h
//class Example {
//public:
//	static double rate = 6.5; 
//	static const int vecSize = 20; 
//	static vector<double> vec(vecSize); 
//cant provide in class initializers for static members.
//};
//// example.C
//#include "example.h"
//double Example::rate;//must initialize
//vector<double> Example::vec; //must initialize