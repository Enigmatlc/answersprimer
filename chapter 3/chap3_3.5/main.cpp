/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 1, 2019, 10:49 PM
 */

//Exercise 3.5: Write a program to read strings from the standard input,
//concatenating what is read into one large string. Print the concatenated
//string. Next, change the program to separate adjacent input strings by a
//space.
#include <iostream>
#include <string>

using std::string;  using std::cin;
using std::cin;     using std::cout;
using std::endl;


/*
 * 
 */
int main(int argc, char** argv) {
    string read,cstring;
    cin>>cstring;
    while(cin>>read){
        cstring +=" "+read;
        cout<<cstring<< endl;
    }
    return 0;
}

