/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 15, 2019, 12:27 PM
 */

//Exercise 5.16: The while loop is particularly good at executing while some
//condition holds; for example, when we need to read values until end-of-file.
//The for loop is generally thought of as a step loop: An index steps through
//a range of values in a collection. Write an idiomatic use of each loop and
//then rewrite each using the other loop construct. If you could use only one
//loop, which would you choose? Why?

#include <iostream>

using std::cin;


/*
 * 
 */
int main(int argc, char** argv) {
    // read until end of file
    int num=0;
    //for
    for(;cin>>num;)
        ;
    while(cin>>num)
        ;
    //i prefer the while for these types of situations
    
    
    
    
    //increase ib until we reach xi
    int ib=0, ix =10;
    //while
    while(ib != ix)
        ib++;
    for(int ib=0;ib!=ix;++ib)
        ;
    //i prefer the for loop in this situation
     

    return 0;
}

