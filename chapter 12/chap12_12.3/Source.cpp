//Exercise 12.3: Does this class need const versions of push_back and
//pop_back ? If so, add them.If not, why aren’t they needed ?

//A "const function", denoted with the keyword const after a function declaration, makes it a compiler error for this class function to change a member variable of the class.However, reading of a class variables is okay inside of the function, 
//but writing inside of this function will generate a compiler error.

//we should make a constant version of pop_back and push_back since we will be changing class members with those two functions.