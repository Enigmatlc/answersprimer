/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 3, 2019, 1:26 PM
 */
//Exercise 4.29: Predict the output of the following code and explain your
//reasoning. Now run the program. Is the output what you expected? If not,
//figure out why.

//int x[10]; int *p = x;
//cout << sizeof(x)/sizeof(*x) << endl; 10
//cout << sizeof(p)/sizeof(*p) << endl; size of pointer / 4
#include <iostream>

using std::cout;    using std::endl;
/*
 * 
 */
int main(int argc, char** argv) {

    int x[10]; int *p = x;
    cout << sizeof(x)/sizeof(*x) << endl;
    cout << sizeof(p)/sizeof(*p) << endl;
    return 0;
}

