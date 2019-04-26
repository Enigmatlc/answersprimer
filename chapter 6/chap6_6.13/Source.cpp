//exercise 6.13: assuming t is the name of a type, explain the difference
//between a function declared as void f(t) and void f(t&).

//f(t) copies the whole object
//f(&t) uses a reference to access the object without having to copy it.