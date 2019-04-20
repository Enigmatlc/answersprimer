/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 19, 2019, 3:12 PM
 */
//Exercise 5.22: The last example in this section that jumped back to begin
//could be better written using a loop. Rewrite the code to eliminate the goto.

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//    begin:
//    int sz = get_size();
//    if (sz <= 0) {
//    goto begin;
//    }
    //loop version
    
    while((int sz= get_size()) <=0)
                ;
    return 0;
}

