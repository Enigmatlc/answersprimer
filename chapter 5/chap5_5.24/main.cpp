/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 19, 2019, 8:13 PM
 */
//Exercise 5.24: Revise your program to throw an exception if the second
//number is zero. Test your program with a zero input to see what happens on
//your system if you don’t catch an exception.
#include <iostream>
#include <stdexcept>

using std::cin;     using std::endl;
using std::cout;    using std::runtime_error;


/*
 * 
 */
int main(int argc, char** argv) {
    int vi,vi2;
    cout<<"Enter two numbers"<<endl;
    cout<<"Enter first number: "<<endl;
    cin>>vi;
    cout<<"Enter second number: "<<endl;
    cin>>vi2;
    if(vi2 == 0)
        throw runtime_error("Division by 0");
    cout<<"Num1 divided by Num2 is :"<<vi/vi2<<endl;
    return 0;
}