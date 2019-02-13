/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 12, 2019, 7:58 PM
 */
//Exercise 3.39: Write a program to compare two strings. Now write a
//program to compare the values of two C-style character strings.
#include <iostream>
#include <cstring>
#include <string>


using std::string;   using std::cout;
using std::endl;     using std::strlen;
/*
 * 
 */
int main(int argc, char** argv) {
    string str="I HATE CATS";
    string str2="I HATE CATS";
    //string comparison
    if(str==str2)
        cout<<"Strings are equal"<<endl;
    else
        cout<<"Strings are not equal"<<endl;
    //c-style string comparison
    char cstr[]={'i','h','a','\0'};
    char cstr2[]={'i','h','a','\0'};

    auto len=strlen(cstr);
    auto len2=strlen(cstr2);
    
    int cnt= 0;
    while(cnt<=len && cnt <= len2){
        if(cstr[cnt] == cstr2[cnt]){
            cout<<"c-string is equal"<<endl;
        }
        else
            cout<<"c-string is not equal"<<endl;
     
        cnt++;
    }
    
    
    return 0;
}

