/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 3, 2019, 1:57 PM
 */

//Exercise 4.32: Explain the following loop.

//constexpr int size = 5;
//int ia[size] = {1,2,3,4,5};
//for (int *ptr = ia, ix = 0; ix != size && ptr != ia+size; ++ix, ++ptr) 
// { /* ... */ }
both expressions in the for loop do the same thing. ptr uses a pointer that points to the first element of the array until the pointer reaches the end of the array.
ix uses the size variable to count until the end of the array is reached. 

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    return 0;
}

