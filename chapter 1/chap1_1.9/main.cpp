/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: abel8
 *
 * Created on November 23, 2018, 7:17 PM
 * 1.9: Write a program that uses a while to sum the numbers from
 *50 to 100.
 * 
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main() {
    int count=0;
    int strt=50;
    while(strt <=100){
        count+=strt;
        strt++;
    }
    std::cout<<count<<std::endl;
    return 0;
}

