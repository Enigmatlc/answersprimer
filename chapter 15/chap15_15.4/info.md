Exercise 15.4: Which of the following declarations, if any, are incorrect?
Explain why.
class Base { ... };
(a) class Derived : public Derived { ... }; illegal a class cant use it self as the base class
(b) class Derived : private Base { ... };legal Base is the base class
(c) class Derived : public Base; illegal derived classes are declared as regular classes without the derivation list.