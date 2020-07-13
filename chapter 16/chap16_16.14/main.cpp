#include"Screen.h"
#include<string>
#include<iostream>
using std::cout;
using std::endl;
using std::cin;
using std::string;
int main(){
    Screen<5,5> myScreen('X');
    myScreen.move(4, 0).set('#').display(cout);
    cout << endl;
    myScreen.display(cout);
    cout << endl;
    cout << myScreen << endl;
}