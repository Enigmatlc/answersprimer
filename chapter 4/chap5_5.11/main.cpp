/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 7, 2019, 7:54 AM
 */
//Exercise 5.11: Modify our vowel-counting program so that it also counts the
//number of blank spaces, tabs, and newlines read.
#include <iostream>

using std::cout;    using std::endl;
using std::cin;


/*
 * 
 */
int main(int argc, char** argv) {
    char ch;
    unsigned aCnt=0,eCnt=0, iCnt=0, oCnt = 0, uCnt = 0,sCnt=0,tCnt=0,nCnt=0;
    while (cin.get(ch)) {
    // if ch is a vowel, increment the appropriate counter
        switch (ch) {
            case 'a':
            case 'A':
                ++aCnt;
                break;
            case 'e':
            case 'E':
                ++eCnt;
                break;
            case 'i':
            case 'I':
                ++iCnt;
                break;
            case 'o':
            case 'O':
                ++oCnt;
                break;
            case 'u':
            case 'U':
                ++uCnt;
                break;
            case ' ':
                ++sCnt;
                break;
            case '\t':
                ++tCnt;
                break;
            case '\n':
                ++nCnt;
                break;
        }
    }
// print results
cout << "Number of vowel a: \t" << aCnt << '\n'
<< "Number of vowel e: \t" << eCnt << '\n'
<< "Number of vowel i: \t" << iCnt << '\n'
<< "Number of vowel o: \t" << oCnt << '\n'
<< "Number of vowel u: \t" << uCnt << '\n'
<< "Number of spaces: \t" <<sCnt<< '\n'
<< "Number of tabs: \t" << tCnt << '\n'
<< "Number of newlines: \t"<< nCnt << endl;
    return 0;
}

