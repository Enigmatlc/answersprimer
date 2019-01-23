/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on January 22, 2019, 9:11 PM
 */
//Exercise 2.35: Determine the types deduced in each of the following
//definitions. Once you’ve figured out the types, write a program to see
//whether you were correct.
//
//const int i = 42;
//auto j = i; j is an int(top level const in i is dropped)
//const auto &k = i; k is const int&
//auto *p = &i; p is  const int*
//const auto j2 = i, &k2 = i; j is const int,k is const int&
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    return 0;
}

