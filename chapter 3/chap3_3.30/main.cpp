/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 9, 2019, 7:12 PM
 */
//Exercise 3.30: Identify the indexing errors in the following code:
//
//constexpr size_t array_size = 10;
//int ia[array_size];
//for (size_t ix = 1; ix <= array_size; ++ix) 
//ia[ix] = ix;
//ix starts at 1 and the test statement  checks until 10. the loop will never reach the first element in the array and will go over the size of the array by one element.
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    return 0;
}

