/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 4, 2019, 8:11 PM
 */
//Exercise 5.3: Use the comma operator (§ 4.10, p. 157) to rewrite the
//while loop from § 1.4.1 (p. 11) so that it no longer requires a block. Explain
//whether this rewrite improves or diminishes the readability of this code.
//it does not improve the readability of the code, but it saves alot of space in the code.
#include <iostream>
int main()
{
//    int sum = 0, val = 1;
//    // keep executing the while as long as val is less than or equal to 10
//    while (val <= 10) {
//    sum += val; // assigns sum + val to sum
//    ++val; // add 1 to val
//    }
//    std::cout << "Sum of 1 to 10 inclusive is "<<std::endl;
    int sum = 0, val = 1;
    // keep executing the while as long as val is less than or equal to 10
    while (val <= 10)sum += val,++val;
    std::cout << "Sum of 1 to 10 inclusive is "<<std::endl;
}