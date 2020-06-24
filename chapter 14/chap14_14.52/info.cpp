// Exercise 14.52: Which operator+, if any, is selected for each of the
// addition expressions? List the candidate functions, the viable functions, and
// the type conversions on the arguments for each viable function:
#include<iostream>
class SmallInt {
friend
SmallInt operator+(const SmallInt&, const SmallInt&);
public:
SmallInt(int = 0); // conversion from int
operator int() const { return val; } // conversion to int
private:
std::size_t val;
};
struct LongDouble {
// member operator+ for illustration purposes; + is usually a nonmember
LongDouble operator+(const SmallInt&);
// other members as in § 14.9.2 (p. 587)
};
LongDouble operator+(LongDouble&, double);
SmallInt si;
LongDouble ld;
ld = si + ld;//ambiguous
ld = ld + si;//operator+(const SmallInt&) and operator+(LongDouble&, double)