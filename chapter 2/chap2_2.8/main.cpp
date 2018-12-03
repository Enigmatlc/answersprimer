/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on November 28, 2018, 8:10 PM
 * 2.8: Using escape sequences, write a program to print 2M followed
 * by a newline. Modify the program to print 2, then a tab, then an M, followed
 * by a newline.
 * 
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    std::cout<<"2M\12";
    std::cout<<"2\tM\12";
    return 0;
}

