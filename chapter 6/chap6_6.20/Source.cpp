//Exercise 6.20: When should reference parameters be references to const ?
//What happens if we make a parameter a plain reference when it could be a
//reference to const ?

//parameters should be references to const when the object will not be changed by the function.
//if we make a parameter a regular reference it will not be possible to use string literals as arguments and we cant use the function call as an argument when a const reference is needed.
