/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 20, 2019, 10:12 PM
 */
//Exercise 6.3: Write and test your own version of fact.
#include <iostream>

using std::cout;    using std::endl;


/*
 * 
 */
// factorial of val is val * (val - 1) * (val - 2) . . . * ((val - (val - 1)) * 1)
int fact(int val){
    int ret = 1; // local variable to hold the result as we calculate it
    while (val > 1)
        ret *= val--; // assign ret * val to ret and decrement val
    return ret; // return the result
}
int main(int argc, char** argv) {
    cout<< fact(5);
    return 0;
}

