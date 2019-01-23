/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on January 23, 2019, 11:25 AM
 */

//Exercise 2.38: Describe the differences in type deduction between
//decltype and auto. Give an example of an expression where auto and
//decltype will deduce the same type and an example where they will deduce
//differing types.

//int i= 10,&r=i;

//both will deduce the same type
//decltype (i) a= i;//int
//auto b=i;//int

// will deduce different types
//auto c = r ; //int
//decltype(r) d;//int&
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    return 0;
}

