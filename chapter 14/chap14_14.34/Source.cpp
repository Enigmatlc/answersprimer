//Exercise 14.34: Define a function - object class to perform an if - then - else
//operation : The call operator for this class should take three parameters.It
//should test its first parameter and if that test succeeds, it should return its
//second parameter; otherwise, it should return its third parameter.
class IfThenElse {
public:
	int operator()(const int i, const int j, const int k) {
		if (i == 0)
			return i;
		else if (j == 0)
			return j;
		else
			return k;
	}
};