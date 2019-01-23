/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on January 22, 2019, 9:02 PM
 */
//Exercise 2.34: Write a program containing the variables and assignments
//from the previous exercise. Print the variables before and after the
//assignments to check whether your predictions in the previous exercise were
//correct. If not, study the examples until you can convince yourself you know
//what led you to the wrong conclusion.
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //a
      int i = 0, &r = i;
//    auto a = r; // a is an int (r is an alias for i, which has type int)
//    a=42;
//    cout<<a<<endl;
    //b
    const int ci = i, &cr = ci;
//    auto b = ci; // b is an int (top-level const in ci is dropped)
//    b=42;
//    cout<<b<<endl;//42
    //c
//      auto c = cr; // c is an int (cr is an alias for ci whose const is top-level)
//      c=42;
//      cout<<c<<endl;//42
    //d
//    auto d = &i; // d is an int*(& of an int object is int*)
//    d=42;
//    cout<<d<<endl;//error
    //e
//    auto e = &ci; // e is const int*(& of a const object is low-level const)
//    e=42;
//    cout<<e<<endl;//error: invalid conversion from 'int' to 'const int*'
    //g
//      auto &g = ci;
//      g=42;
//      cout<<g<<endl;//error: assignment of read-only reference 'g'
    return 0;
}

