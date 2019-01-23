/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on January 23, 2019, 11:14 AM
 */

//Exercise 2.36: In the following code, determine the type of each variable
//and the value each variable has when the code finishes:
//int a = 3, b = 4;
//decltype(a) c = a; c is an int type
//decltype((b)) d = a; b is a int& that points to a
//++c;
//++d;
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int a = 3, b = 4;
    decltype(a) c = a;//int
    decltype((b)) d = a;// int&
    ++c; //increases c by one and it becomes 4
    ++d; //d is a int& so it increases a by one and it becomes 4
    cout<<c<<endl;//4
    cout<<d<<endl;//4
    return 0;
}

