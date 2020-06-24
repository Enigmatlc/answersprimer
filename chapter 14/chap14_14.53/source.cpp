// Exercise 14.53: Given the definition of SmallInt on page 588, determine
// whether the following addition expression is legal. If so, what addition
// operator is used? If not, how might you change the code to make it legal?

#include<iostream>
class SmallInt {
friend SmallInt operator+(const SmallInt&, const SmallInt&);
public:
SmallInt(int = 0); // conversion from int
operator int() const { return val; } // conversion to int
private:
std::size_t val;
};
SmallInt s1;
//double d = s1 + 3.14; //ambiguous we have to convert 3.14 explicitly
double d=s1+ SmallInt(3.14);