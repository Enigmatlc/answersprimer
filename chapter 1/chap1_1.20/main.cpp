/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on November 24, 2018, 3:54 PM
 * 1.20: http://www.informit.com/title/032174113 contains a copy of
 * Sales_item.h in the Chapter 1 code directory. Copy that file to your
 * working directory. Use it to write a program that reads a set of book sales
 * transactions, writing each transaction to the standard output.
 * 
 */

#include <cstdlib>
#include "Sales_item.h"
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Sales_item item,item2;
    cin>>item;
    cin>>item2;
    cout<<item<<" "<<item2<<std::endl;
    return 0;
}

