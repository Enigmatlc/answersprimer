/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 19, 2019, 8:19 PM
 */
//Exercise 5.25: Revise your program from the previous exercise to use a
//try block to catch the exception. The catch clause should print a message
//to the user and ask them to supply a new number and repeat the code inside
//the try.
#include <iostream>
#include <stdexcept>

using std::cin;     using std::endl;
using std::cout;    using std::runtime_error;


/*
 * 
 */
int main(int argc, char** argv) {
    int vi,vi2;
    cout<<"Enter two numbers"<<endl;
    while(cin>>vi>>vi2){
        try{
            if(vi2 == 0)
                throw runtime_error("Division by 0");
            cout<<"Num1 divided by Num2 is :"<<vi/vi2<<endl;
        }catch (runtime_error err){
            cout<<err.what() <<" \nWant to try again? y or n"<<endl;
            char ch;
            cin>>ch;
            if(!cin || ch == 'n')
                break;
    }
        cout<<"Enter two numbers"<<endl;

    }
    return 0;
}