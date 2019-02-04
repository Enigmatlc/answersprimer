/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: abel8
 *
 * Created on November 21, 2018, 9:23 PM
 * 1.5: We wrote the output in one large statement. Rewrite the
 * program to use a separate statement to print each operand.
 */
#include <iostream>
int main(){
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The product of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << v1 * v2 << std::endl;
    return 0;
}

