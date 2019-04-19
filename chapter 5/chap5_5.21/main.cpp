/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 19, 2019, 2:50 PM
 */
//Exercise 5.21: Revise the program from the exercise in § 5.5.1 (p. 191) so
//that it looks only for duplicated words that start with an uppercase letter.

#include <iostream>
#include <string>
#include <cctype>

using std::cout;    using std::endl;
using std::cin;     using std::string;
using std::isupper;

/*
 * 
 */
int main(int argc, char** argv) {
    string read,lread,cpy;
    char ch,ch1;
    while(cin>>read){
        cpy=lread;
        ch=read[0];
        ch1=lread[0];
        if((isupper(ch) && isupper(ch1)) && read == lread){
            cout<<read<<" was repeated"<<endl;
            break;
        }
        lread = read;
    }
    if(cpy != lread)
        cout<<"No words were repeated"<<endl;

    return 0;
}