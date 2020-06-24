#pragma once
class LambdasLike {
public:
	bool operator()( int j) {
		return i == j;
	}
	int i = 0;
};