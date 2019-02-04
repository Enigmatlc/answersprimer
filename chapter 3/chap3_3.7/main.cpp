/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 2, 2019, 6:46 PM
 */
//Exercise 3.7: What would happen if you define the loop control variable in
//the previous exercise as type char? Predict the results and then change your
//program to use a char to see if you were right.

//The string will not be changed because the character stored inside the loop control variable is a copy of the character of the string.

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
    for(char c: str)
        if(!isspace(c))
            c='X';
    cout<<str<<endl;
    return 0;
}

