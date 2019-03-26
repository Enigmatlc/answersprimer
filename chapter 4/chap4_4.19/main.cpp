/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on March 26, 2019, 11:37 AM
 */

//Exercise 4.19: Given that ptr points to an int, that vec is a
//vector<int>, and that ival is an int, explain the behavior of each of
//these expressions. Which, if any, are likely to be incorrect? Why? How might
//each be corrected?
//(a) ptr != 0 && *ptr++ undefined behavior: we don't know what operand will be evaluated first
//(b) ival++ && ival the right operand will be evaluated first and increased by one then the left operand will be one greater than the right operand
//(c) vec[ival++] <= vec[ival] the left operand will be evaluated and incresed by one. The right operand will be one greater than the right operand

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    return 0;
}

