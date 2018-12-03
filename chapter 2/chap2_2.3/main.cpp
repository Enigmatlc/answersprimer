/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on November 26, 2018, 9:58 PM
 * 2.3: What output will the following code produce?
 * unsigned u = 10, u2 = 42;
 * std::cout << u2 - u << std::endl; OUTPUT: 32
 * std::cout << u - u2 << std::endl; OUTPUT: 4294967264
 * int i = 10, i2 = 42;
 * std::cout << i2 - i << std::endl; OUTPUT: 32
 * std::cout << i - i2 << std::endl; OUTPUT: -32
 * std::cout << i - u << std::endl; OUTPUT: 4294967264
 * std::cout << u - i << std::endl; OUTPUT: 0
 * 
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int u=10;
     unsigned u2=10;
    std::cout<<u-u2<<std::endl;
    return 0;
}

