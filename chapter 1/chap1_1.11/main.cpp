/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: abel8
 *
 * Created on November 23, 2018, 7:31 PM
 * 1.11: Write a program that prompts the user for two integers.
 *Print each number in the range specified by those two integers.
 * 
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

