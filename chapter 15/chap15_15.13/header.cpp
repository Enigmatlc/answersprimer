//Exercise 15.13: Given the following classes, explain each print function:
#include<string>
using std::string;
#include<iostream>
using std::ostream;

class base {
public:
string name() { std::cout<<"base"<<std::endl; return basename; }
virtual void print(ostream &os) {std::cout<<"base"<<std::endl; os << basename; }//prints the string basename everytime its called
private:
string basename;
};
class derived : public base {
public:
void print(ostream &os) { print(os); os << " " << i; }//keeps calling it self for ever and it never prints i we have to include the base class in the call to print.
private:
int i;
};
//If there is a problem in this code, how would you fix it?
//base::print(os) fixed
