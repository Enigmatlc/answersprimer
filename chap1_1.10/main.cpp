/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: abel8
 *
 * Created on November 23, 2018, 7:24 PM
 * 1.10: In addition to the ++ operator that adds 1 to its operand,
 *there is a decrement operator (--) that subtracts 1. Use the decrement
 *operator to write a while that prints the numbers from ten down to zero.
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int count=10;
    while(count>=0){
        std::cout<<count<< " ";
        count--;
    }
    return 0;
}

