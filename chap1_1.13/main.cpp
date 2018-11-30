/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *1.13: Rewrite the exercises from § 1.4.1 (p. 13) using for loops.
 * Created on November 23, 2018, 7:47 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Write a program that uses a while to sum the numbers from 50 to 100.
    int count;
    for(int i=50;i<=100;i++){
        count+=i;
    }
    cout<<count<<endl;
    /*In addition to the ++ operator that adds 1 to its operand,
    there is a decrement operator (--) that subtracts 1. Use the decrement
    operator to write a while that prints the numbers from ten down to zero.
     */
    for(int i =10;i>=0;i--){
        cout<<i<< " ";
    }
    /*Write a program that prompts the user for two integers.
    Print each number in the range specified by those two integers.
     */
    cout<<endl;
    int num1,num2;
    cin>>num1>>num2;
    if(num1>num2){
        
        for(int i=num2;i<=num1;i++){
            cout<<i<<" ";
        }
    }else{
        for(int i=num1;i<=num2;i++){
            cout<<i<<" ";
        }
    }
    return 0;
}

