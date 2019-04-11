/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 11, 2019, 2:06 PM
 */
//Exercise 5.13: Each of the programs in the highlighted text on page 184
//contains a common programming error. Identify and correct each error.

    //example 1 no break statements
//    unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
//    char ch = next_text();
//    switch (ch) {
//        case 'a': 
//            aCnt++;
//            break;
//        case 'e': 
//            eCnt++;
//            break;
//        default: 
//            iouCnt++;
//    }
    //example 2 declaration variable inside case and using the variable with declaration.
//    unsigned index = some_value();
//    int ix = get_value();
//
//    switch (index) {
//        case 1:
//            ivec[ ix ] = index;
//            break;
//        default:
//            ix = ivec.size()-1;
//            ivec[ ix ] = index;
//        }
    //example 3 each case has multiple labels
//    unsigned evenCnt = 0, oddCnt = 0;
//    int digit = get_num() % 10;
//    switch (digit) {
//        case 1:
//        case 3: 
//        case 5:
//        case 7:
//        case 9:
//            oddcnt++;
//            break;
//        case 2:
//        case 4:
//        case 6:
//        case 8:
//        case 10:
//            evencnt++;
//            break;
//    }
    //example 4 using no-cosnt variables in case label
//    const unsigned ival=512, jval=1024, kval=4096;
//    unsigned bufsize;
//    unsigned swt = get_bufCnt();
//    switch(swt) {
//        case ival:
//            bufsize = ival * sizeof(int);
//            break;
//        case jval:
//            bufsize = jval * sizeof(int);
//            break;
//        case kval:
//            bufsize = kval * sizeof(int);
//            break;
//            }


