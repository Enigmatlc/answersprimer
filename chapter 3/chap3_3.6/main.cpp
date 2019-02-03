/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 2, 2019, 6:40 PM
 */
//Exercise 3.6: Use a range for to change all the characters in a string to
//X.
#include <string>
#include <iostream>
#include <cctype>

using std::cout;    using std::endl;
using std::string;  


/*
 * 
 */
int main(int argc, char** argv) {
    string str("Test String");
    for(auto &c: str)
        if(!isspace(c))
            c='X';
    cout<<str<<endl;
    return 0;
}

