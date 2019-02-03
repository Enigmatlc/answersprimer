/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 2, 2019, 7:07 PM
 */
//Exercise 3.10: Write a program that reads a string of characters including
//punctuation and writes what was read but with the punctuation removed.

#include <iostream>
#include <string>
#include <cctype>

using std::cout;    using std::endl;
using std::string;  using std::cin;
using std::getline;

/*
 * 
 */
int main(int argc, char** argv) {
    string read;
    string output;
    if(getline(cin,read)){
        for(auto c:read){
            if(!ispunct(c))
                output +=c;
        }
    }
    cout<<output<<endl;
    return 0;
}

