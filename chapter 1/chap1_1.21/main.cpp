/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on November 24, 2018, 4:09 PM
 * 
 * 1.21: Write a program that reads two Sales_item objects that
 * have the same ISBN and produces their sum.
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
    cout<<item + item2<<std::endl;
    return 0;
}
