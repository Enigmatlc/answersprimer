/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on March 25, 2019, 12:59 PM
 */
//Exercise 4.7: What does overflow mean? Show three expressions that will
//overflow. over flow happens when we go over the boundaries of a data type.
#include <iostream>

using std::cout;    using std::endl;


/*
 * 
 */
int main(int argc, char** argv) {
    
    //example 1
    unsigned int num =0;
    cout<<(num-1)<<endl;
    //example 2
    int num2=2147483647;
    cout<<(num2+1)<<endl;
    //example 3
    short num3 = 32767;
    num3+=1;
    cout<<num3<<endl;
    return 0;
}

