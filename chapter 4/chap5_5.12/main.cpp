/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 10, 2019, 1:33 PM
 */
//Exercise 5.12: Modify our vowel-counting program so that it counts the
//number of occurrences of the following two-character sequences: ff, fl,
//and fi.
#include <iostream>

using std::cout;    using std::endl;
using std::cin;


/*
 * 
 */
int main(int argc, char** argv) {
    char ch;
    unsigned aCnt=0,eCnt=0, iCnt=0, oCnt = 0, uCnt = 0,sCnt=0,tCnt=0,nCnt=0,ffCnt=0,flCnt=0,fiCnt=0;
    char curtC= '\0';
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
            case 'f':
                if(curtC=='f'){
                    ++ffCnt;
                }
                break;
            case 'l':
                ++iCnt;
                if(curtC=='f'){
                    ++flCnt;
                }
                break;
            case 'i':
                if(curtC=='f'){
                    ++fiCnt;
                }
                break;
        }
          curtC=ch;

    }
// print results
cout << "Number of vowel a: \t" << aCnt << '\n'
<< "Number of vowel e: \t" << eCnt << '\n'
<< "Number of vowel i: \t" << iCnt << '\n'
<< "Number of vowel o: \t" << oCnt << '\n'
<< "Number of vowel u: \t" << uCnt << '\n'
<< "Number of spaces:  \t" <<sCnt<< '\n'
<< "Number of tabs:    \t" << tCnt << '\n'
<< "Number of newlines:\t"<< nCnt << '\n'
<< "Number of ff:      \t"<< ffCnt <<'\n'
<< "Number of fl:      \t"<< flCnt << '\n'
<< "Number of fi:      \t"<< fiCnt << endl;
    return 0;
}

