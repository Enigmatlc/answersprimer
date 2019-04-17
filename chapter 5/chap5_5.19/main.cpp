/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 17, 2019, 6:23 PM
 */
//Exercise 5.19: Write a program that uses a do while loop to repetitively
//request two strings from the user and report which string is less than
//the other.

#include <iostream>
#include <string>

using std::string;  using std::cout;
using std::endl;    using std::cin;


/*
 * 
 */
int main(int argc, char** argv) {
    string str,str1;
    do{
        cin>>str>>str1;
        if(str>str1)
            cout<<str1<<" is less than "<<str<<endl;
        else if(str == str1)
            cout<<str1<<" is the same size as "<<str<<endl;
        else
            cout<<str<<" is less than "<<str1<<endl;

    }while(cin);
    return 0;
}

