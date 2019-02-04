/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 2, 2019, 6:49 PM
 */

//Exercise 3.8: Rewrite the program in the first exercise, first using a while
//and again using a traditional for loop. Which of the three approaches do
//you prefer and why?

//I prefer using the for loop because I don't have to declare other variables to keep count outside of the loop.

#include <iostream>
#include <string>
#include <cctype>

using std::cout;    using std::endl;
using std::string;   

/*
 * 
 */
int main(int argc, char** argv) {
    string str("Test String");
        //while
    cout<<"while loop"<<endl;
    string::size_type sze = str.size()-1;
    string::size_type cnt = 0;
    while(cnt <=sze){
        if(!isspace(str[cnt]))
            str[cnt]='X';
        cnt++;
    }
    cout<<str<<endl;
    //for
    cout<<"for loop"<<endl;
    string str2("Test String");
    for(auto cnt = 0;cnt<=sze;cnt++){
        if(!isspace(str2[cnt]))
            str2[cnt]='X';
    }
    cout<<str2<<endl;
    return 0;
}

