//Exercise 7.31: Define a pair of classes X and Y, in which X has a pointer to
//Y, and Y has an object of type X.

#pragma once
class x {
	y* ptr;
};
class y {
	x obj;
};