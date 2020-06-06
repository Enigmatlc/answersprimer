#pragma once
//Exercise 7.36: The following initializer is in error.Identify and fix the
//problem.
//switch the order of initialization of rem and base.
struct X {
	X(int i, int j) : rem(base % j), base(i) { }
	int rem=0;
	int base=0;
};