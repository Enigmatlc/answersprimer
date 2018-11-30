/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on November 24, 2018, 3:06 PM
 * 1.16: Write your own version of a program that prints the sum of
 * a set of integers read from cin.
 * 
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int val=0, sum=0;
    while(std::cin >>val){
        sum+=val;
        std::cout<<sum<<std::endl;
    }
    return 0;
}

