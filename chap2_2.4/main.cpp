/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on November 26, 2018, 10:10 PM
 * 2.4: Write a program to check whether your predictions were
 * correct. If not, study this section until you understand what the problem is.
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
  unsigned u = 10, u2 = 42;
  std::cout << u2 - u << std::endl; //OUTPUT: 32
  std::cout << u - u2 << std::endl; //OUTPUT: 4294967264
  int i = 10, i2 = 42;
  std::cout << i2 - i << std::endl; //OUTPUT: 32
  std::cout << i - i2 << std::endl; //OUTPUT: -32
  std::cout << i - u << std::endl; //OUTPUT: 0
  std::cout << u - i << std::endl; //OUTPUT: 0
    return 0;
}