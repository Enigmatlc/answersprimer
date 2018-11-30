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

//1.8: Indicate which, if any, of the following output statements are
//legal:
//Click here to view code image
//std::cout << "/*";
//std::cout << "*/";
//std::cout << /* "*/" */;
//std::cout << /* "*/" /* "/*" */;
//After you’ve predicted what will happen, test your answers by compiling a
//program with each of these statements. Correct any errors you encounter.


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

