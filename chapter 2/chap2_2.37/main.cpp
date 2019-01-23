/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on January 23, 2019, 11:20 AM
 */

//Exercise 2.37: Assignment is an example of an expression that yields a
//reference type. The type is a reference to the type of the left-hand operand.
//That is, if i is an int, then the type of the expression i = x is int&. Using
//that knowledge, determine the type and value of each variable in this code:
//int a = 3, b = 4;
//
//decltype(a) c = a;// int with value 3
//
//decltype(a = b) d = a; int with value 3

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int a = 3, b = 4;
    decltype(a) c = a; //c is an int with value 3
    decltype(a + b) d = a;//d is an int that has the value 3
    cout<<c<<endl;//3
    cout<<d<<endl;//3
    return 0;
}

