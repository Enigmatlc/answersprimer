/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 7, 2019, 7:48 AM
 */
//Exercise 5.10: There is one problem with our vowel-counting program as
//we’ve implemented it: It doesn’t count capital letters as vowels. Write a
//program that counts both lower- and uppercase letters as the appropriate
//vowel—that is, your program should count both 'a' and 'A' as part of
//aCnt, and so forth.
#include <iostream>

using std::cout;    using std::endl;
using std::cin;


/*
 * 
 */
int main(int argc, char** argv) {
    char ch;
    unsigned aCnt=0,eCnt=0, iCnt=0, oCnt = 0, uCnt = 0;
    while (cin >> ch) {
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
        }
    }
// print results
cout << "Number of vowel a: \t" << aCnt << '\n'
<< "Number of vowel e: \t" << eCnt << '\n'
<< "Number of vowel i: \t" << iCnt << '\n'
<< "Number of vowel o: \t" << oCnt << '\n'
<< "Number of vowel u: \t" << uCnt << endl;
    return 0;
}

