/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 20, 2019, 10:14 PM
 */
//Exercise 6.4: Write a function that interacts with the user, asking for a
//number and generating the factorial of that number. Call this function from
//main.
#include <iostream>

using std::cout;    using std::endl;
using std::cin;
/*
 * 
 */
int fact_usr(int val){
    int ret = 1; // local variable to hold the result as we calculate it
    while (val > 1)
        ret *= val--; // assign ret * val to ret and decrement val
    return ret; // return the result
}

int main(int argc, char** argv) {
    int num=0;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    cout<<"Factorial of "<<num<<" is " <<fact(num)<<endl;
    return 0;
}

