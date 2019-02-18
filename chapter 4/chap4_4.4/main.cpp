/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 18, 2019, 12:27 PM
 */

//Exercise 4.4: Parenthesize the following expression to show how it is
//evaluated. Test your answer by compiling the expression (without
//parentheses) and printing its result.


//((12 / ((3 * 4) + 5 * 15)) + ((24 % 4 / 2))
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    cout<<(((12 / 3) * 4)+ (5 * 15)) + (24 % (4 / 2))<<endl;
    
    cout<<12 / 3 * 4 + 5 * 15 + 24 % 4 / 2<<endl;

    return 0;
}

