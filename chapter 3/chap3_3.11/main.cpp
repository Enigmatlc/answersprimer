/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 2, 2019, 7:13 PM
 */
//Exercise 3.11: Is the following range for legal? If so, what is the type of
//c?
//
//const string s = "Keep out!";
//for (auto &c : s) { /* ... */ }

//its legal because the auto specifier will automatically keep the conts from the string.
#include <iostream>
#include <string>

using std::endl;
using std::string;  
using std::cout;


/*
 * 
 */
int main(int argc, char** argv) {
    const string s = "Keep out!";
    for (auto &c : s) { 
        cout<<c;
    }
    return 0;
}

