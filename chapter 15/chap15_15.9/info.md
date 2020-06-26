Exercise 15.9: When is it possible for an expression’s static type to differ
from its dynamic type? Give three examples in which the static and dynamic
type differ.

when use a pointer or reference of base type to point to a derived type.

void test(Base& item) if this is a base class objects of derived type can be passed as arguments.
void test(Base*&* item) same as above but using a pointer instead.

double ret = item.net_price(n); out example from previews problems. 