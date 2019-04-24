/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 17, 2019, 6:40 PM
 */
//Exercise 5.20: Write a program to read a sequence of strings from the
//standard input until either the same word occurs twice in succession or all
//the words have been read. Use a while loop to read the text one word at a
//time. Use the break statement to terminate the loop if a word occurs twice
//in succession. Print the word if it occurs twice in succession, or else print a
//message saying that no word was repeated.
#include <iostream>
#include <string>

using std::cout;    using std::endl;
using std::cin;     using std::string;

/*
 * 
 */
int main(int argc, char** argv) {
    string read,lread,cpy;
    
    while(cin>>read){
        cpy=lread;
        if(read == lread){
            cout<<read<<" was repeated"<<endl;
            break;
        }
        lread = read;
    }
    if(cpy != lread)
        cout<<"No words were repeated"<<endl;
    return 0;
}

