/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 7, 2019, 7:37 AM
 */
//Exercise 5.9: Write a program using a series of if statements to count the
//number of vowels in text read from cin.
#include <iostream>

using std::cout;    using std::endl;
using std::cin;


/*
 * 
 */
int main(int argc, char** argv) {
    char ch;
    unsigned aCnt=0,eCnt=0, iCnt=0, oCnt = 0, uCnt = 0;
    while(cin >> ch){
        if(ch == 'a'){
            ++aCnt;
        }
        else if(ch == 'e'){
            ++eCnt;
        }
        else if(ch == 'i'){
            ++iCnt;
        }
        else if(ch == 'o'){
            ++oCnt;
        }
        else if(ch == 'u'){
            ++uCnt;
        }
    }
    cout<<"a count: "<<aCnt<<" e count: "<<eCnt<<" i count: "<<iCnt<<" o count: "<<oCnt<<" u count: "<<uCnt<<endl;
    return 0;
}

