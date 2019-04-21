/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 20, 2019, 10:21 PM
 */
//Exercise 6.5: Write a function to return the absolute value of its argument.
#include <iostream>

using std::cout;    using std::endl;

/*
 * 
 */
int abs(int num){
    if(num <0)
        return num * -1;
    return num;
}
int main(int argc, char** argv) {
    cout<<abs(5)<<endl;
    return 0;
}

