/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 12, 2019, 11:27 AM
 */
//Exercise 5.14: Write a program to read strings from standard input
//looking for duplicated words. The program should find places in the input
//where one word is followed immediately by itself. Keep track of the largest
//number of times a single repetition occurs and which word is repeated. Print
//the maximum number of duplicates, or else print a message saying that no
//word was repeated. For example, if the input is
//how now now now brown cow cow
#include <string>
#include <iostream>


using std::cout;    using std::endl;
using std::cin;     using std::string;
/*
 * 
 */
int main(int argc, char** argv) {
    string cstr, pstr,hstr;
    
    unsigned mcnt=0,ccnt=0;
    while(cin >>cstr ){
        if(pstr == cstr){
            ++ccnt;
        }else{
            ccnt=1;
            pstr = cstr;
        }
        if(mcnt < ccnt){
            hstr=pstr;
            mcnt = ccnt;
        }    
    }
    cout<<hstr<<" "<<mcnt<<endl;
    return 0;
}

