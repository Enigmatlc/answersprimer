//Exercise 13.52: Explain in detail what happens in the assignments of the
//HasPtr objects on page 541. In particular, describe step by step what
//happens to values of hp, hp2, and of the rhs parameter in the HasPtr
//assignment operator.
//hp = hp2 
//
//hp2 is copied by value since rhs is a reference type
//swap is called and the values inside both of them are switched
//a copy of hp is returned
//rhs is deleted by the destructor.
//hp2 still has the same values
//
//hp = std::move(hp2);
//std::move calls the move constructor and  p moves all the members from hp2 to hp and after the call is done