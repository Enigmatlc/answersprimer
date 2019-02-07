/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on January 24, 2019, 9:06 PM
 */
//Exercise 3.2: Write a program to read the standard input a line at a time.
//Modify your program to read a word at a time.

#include <iostream>
#include <string>
using std::string;      using std::cout;     using std::cin;
using std::cin;         using std::endl;     using std::getline;
/*
 * 
 */

int main() {
    string line;
    //read line
    while(getline(cin,line)){
        cout<<line<<endl;
    }
    //read word
    while(cin>>line){
        cout<<line<<endl;
    }
    return 0;
}

