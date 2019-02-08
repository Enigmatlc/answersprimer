/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 7, 2019, 7:04 PM
 */
//Exercise 3.23: Write a program to create a vector with ten int elements.
//Using an iterator, assign each element a value that is twice its current value.
//Test your program by printing the vector.
#include <iostream>
#include <vector>

using std::vector;  using std::cout;

/*
 * 
 */
int main(int argc, char** argv) {
    vector<int> vec(10,4);
    for(auto iter=vec.begin();iter != vec.end();iter++){
        *iter=*iter*2;
        cout<<*iter<<" ";
    }
    return 0;
}

