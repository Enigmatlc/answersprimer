/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on March 25, 2019, 7:30 PM
 */
//Exercise 4.10: Write the condition for a while loop that would read ints
//from the standard input and stop when the value read is equal to 42.

#include <iostream>

using std::cin;  using std::cout;
using std::endl;
/*
 * 
 */
int main(int argc, char** argv) {
    int num=0;
    while(cin>>num && num != 42)cout<<num<<endl;
    return 0;
}

