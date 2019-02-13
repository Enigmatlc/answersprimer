/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 13, 2019, 9:28 AM
 */
//Exercise 3.41: Write a program to initialize a vector from an array of
//ints.
#include <vector>
#include <iterator>

using std::vector;  using std::end;
using std::begin;


/*
 * 
 */
int main(int argc, char** argv) {
    int arr[]={1,2,3,4,5};
    vector<int> vec (begin(arr),end(arr));
    return 0;
}

