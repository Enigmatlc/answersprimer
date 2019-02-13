/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 12, 2019, 8:33 PM
 */
//Exercise 3.40: Write a program to define two character arrays initialized
//from string literals. Now define a third character array to hold the
//concatenation of the two arrays. Use strcpy and strcat to copy the two
//arrays into the third.
#include <iostream>
#include <cstring>

using std::cout;    using std::strcat;
using std::endl;    using std::strcpy;


/*
 * 
 */
int main(int argc, char** argv) {
    char str[13]="string";
    char str2[6]=" test";
    char str3[13];
    strcat(str,str2);
    strcpy(str3,str);
    cout<<str3<<endl;
    return 0;
}

