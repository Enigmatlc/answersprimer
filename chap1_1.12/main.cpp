/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on November 23, 2018, 7:41 PM
 * 1.12: What does the following for loop do? What is the final value
 *of sum?
 */


#include <iostream>
using namespace std;

/*
 * 
 */
int main() {
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
        sum += i;
    cout<<sum;
    return 0;
}

