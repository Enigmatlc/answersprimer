/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 19, 2019, 8:07 PM
 */
//Exercise 5.23: Write a program that reads two integers from the standard
//input and prints the result of dividing the first number by the second.
#include <iostream>

using std::cin; using std::endl;
using std::cout;


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
    
    cout<<"Num1 divided by Num2 is :"<<vi/vi2<<endl;
    return 0;
}

