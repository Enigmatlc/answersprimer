#pragma once
//Exercise 7.35: Explain the following code, indicating which definition of
//Type or initVal is used for each use of those names.Say how you would
//fix any errors.

//1. change the return type of the seval function definition/declaration to specefy that were using the one inside the class.
//2. rename type inside class so we dont get it confused with the one out side.
//3. rename inival member function so it doesnt get confussed with the one outside the class.
//4. change re types inside the class to use the correct type.

#include<string>

typedef std::string Type;
Type initVal();
class Exercise {
public:
	typedef double ex_Type;
	ex_Type setVal(ex_Type);
	ex_Type ex_initVal();
private:
	int val;
};
Exercise::ex_Type Exercise::setVal(ex_Type parm) {
	val = parm + ex_initVal();
	return val;
}