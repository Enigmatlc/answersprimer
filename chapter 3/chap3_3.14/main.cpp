/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 5, 2019, 11:20 AM
 */
//Exercise 3.14: Write a program to read a sequence of ints from cin and
//store those values in a vector.

#include <iostream>
#include <vector>

using std::vector;  
using std::cin;


/*
 * 
 */
int main(int argc, char** argv) {
    vector<int> vec;
    int read=0;
    while(cin>>read){
        vec.push_back(read);
    }
    return 0;
}

