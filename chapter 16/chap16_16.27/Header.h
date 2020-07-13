#pragma once
#include<vector>

class NoDefault
{
public:
	void f() {}
private:
	NoDefault() = default;
};

