/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: abel8
 *
 * Created on November 23, 2018, 6:50 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    std::cout << "/*";
    std::cout << "*/";
    //std::cout <</* "*/" */; //not valid **FIXED** "/* \"*/\" */"
    //std::cout << /* \"*/" /* "/*" */;//not valid **FIXED** "/* "*/"\ /* "/*"\ */"
    return 0;
}

