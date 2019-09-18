//Exercise 6.53: Explain the effect of the second declaration in each one of
//the following sets of declarations.Indicate which, if any, are illegal.
//(a) int calc(int&, int&);
//int calc(const int&, const int&);
//allows for the function to be callalled on const objects.

//(b) int calc(char*, char*);
//int calc(const char*, const char*);
//allows for the function to be called on consts objects

//(c) int calc(char*, char*);
//int calc(char* const, char* const);
//illegal: top level conts are ignored when used as parameters.