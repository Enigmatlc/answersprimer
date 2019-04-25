/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 25, 2019, 12:25 AM
 */
#include "chapter6.h"
#include <cstdlib>
#include <iostream>

using std::cout;    using std::endl;
using std::cin;
/*
 * 
 */
int main(int argc, char** argv) {
    int num=0;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    cout<<"Factorial of "<<num<<" is " <<fact(num)<<endl;
    return 0;
}

