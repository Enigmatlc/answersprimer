//Exercise 7.34: What would happen if we put the typedef of pos in the
//
//Screen class on page 285 as the last line in the class ?
#pragma once
#include<string>
int height; // defines a name subsequently used inside Screen
class Screen {
public:
	typedef std::string::size_type pos;
	void setHeight(pos);
	pos height = 0; // hides the declaration of height in the outer scope

};
Screen::pos verify(Screen::pos);
void Screen::setHeight(pos var) {
	// var: refers to the parameter
	// height: refers to the class member
	// verify: refers to the global function
	height = verify(var);
}

//the declaration would be out of scope foe hte height member.