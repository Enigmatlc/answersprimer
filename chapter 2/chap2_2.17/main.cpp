/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on November 29, 2018, 7:17 PM
 * 2.17: What does the following code print?
 * int i, &ri = i;
 * i = 5; ri = 10;
 * std::cout << i << " " << ri << std::endl;
 * 
 * OUTPUT: 10 10
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int i, &ri = i;
    i = 5; ri = 10;
    std::cout << i << " " << ri << std::endl;
    return 0;
}

