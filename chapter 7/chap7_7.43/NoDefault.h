#pragma once
//Exercise 7.43: Assume we have a class named NoDefault that has a
//constructor that takes an int, but has no default constructor.Define a class
//C that has a member of type NoDefault.Define the default constructor for
//C.
class NoDefault {
	NoDefault(int e):c(e){}
	int c;
};
class c {
	c() = default;
	NoDefault f;
};