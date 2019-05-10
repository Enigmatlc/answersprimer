//Exercise 6.39: Explain the effect of the second declaration in each one of
//the following sets of declarations.Indicate which, if any, are illegal.

//illegal:top level constants are ignored
//(a) int calc(int, int);
//int calc(const int, const int);

//illegal:different return type, but same parameter.
//(b) int get();
//double get();

//legal:
//(c) int* reset(int*);
//double* reset(double*);