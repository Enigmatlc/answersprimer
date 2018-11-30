/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on November 23, 2018, 8:21 PM
 * 1.14: Compare and contrast the loops that used a for with those
 *using a while. Are there advantages or disadvantages to using either form?
 */

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    for(int i =10;i>=0;i--){
        cout<<i<< " ";
    }
    int count=10;
    while(count>=0){
        std::cout<<count<< " ";
        count--;
    }
    /*for is better for situations where you need to keep count, and the while loop is better when you only need to test a condition*/
    return 0;
}

