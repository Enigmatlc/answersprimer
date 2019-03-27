/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on March 27, 2019, 1:15 PM
 */

//Exercise 4.22: Extend the program that assigned high pass, pass, and fail
//grades to also assign low pass for grades between 60 and 75 inclusive. Write
//two versions: One version that uses only conditional operators; the other
//should use one or more if statements. Which version do you think is easier
//to understand and why? Both versions are pretty easy to understand, but the if statement version looks cleaner.

#include <iostream>
#include <string>

using std::cout;    using std::endl;
using std::string;  

/*
 * 
 */
int main(int argc, char** argv) {
    int grade =91;
    //CONDITIONAL STATEMENT
    string finalgrade = (grade > 90) ? "high pass" : (grade <= 90 && grade >= 76) ? "pass" :(grade <=75 && grade <= 60) ? "low pass" : "fail";
    cout<<finalgrade<<endl;
    //IF STATEMENT
    if(grade > 90){
        cout<<"high pass"<<endl;
    }
    else if(grade <= 90 && grade >= 76){
        cout<<"pass"<<endl;
    }
    else if(grade <= 75 && grade <= 60 ){
        cout<<"low pass"<<endl;
    }else
        cout<<"fail"<<endl;
    return 0;
}

