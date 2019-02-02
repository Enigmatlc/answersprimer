/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 1, 2019, 10:28 PM
 */

//Exercise 3.4: Write a program to read two strings and report whether the
//strings are equal. If not, report which of the two is larger. Now, change
//the program to report whether the strings have the same length, and if
//not, report which is longer.

#include <string>
#include <iostream>

using std::string;   using std::cin;
using std::cout;     using std::endl;


/*
 * 
 */
int main(int argc, char** argv) {
    string line,line2;
    cout<<"Enter the first line: "<<endl;
    getline(cin,line);
    cout<<"Enter the second line: "<<endl;
    getline(cin,line2);
    //first part
    
    if(line == line2){
        cout<<"Strings are equal"<<endl;
    }else{
        if(line > line2){
            cout<<"\""<<line <<"\""<<" is larger."<<endl;
        }else
            cout<<"\""<<line2 <<"\""<<" is larger."<<endl;
    }
    //second part
        if(line == line2){
        cout<<"Strings are equal"<<endl;
    }else{
        if(line.size() > line2.size()){
            cout<<"\""<<line <<"\""<<" is longer."<<endl;
        }else
            cout<<"\""<<line2 <<"\""<<" is longer."<<endl;
    }
    return 0;
}

