/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on November 24, 2018, 3:25 PM
 * 1.19: Revise the program you wrote for the exercises in § 1.4.1 (p.
 * 13) that printed a range of numbers so that it handles input in which the first
 * number is smaller than the second.
 */


#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int num1, num2;
    cin>>num1>>num2;
    if(num1>num2){
        while(num1>=num2){
            cout<<num2<<" ";
            num2++;
        }
    }else{
        while(num1<=num2){
            cout<<num1<<" ";
            num1++;
        }
    }
    return 0;
}
