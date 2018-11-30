/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: abel8
 *
 * Created on November 21, 2018, 9:32 PM
 * 1.6: Explain whether the following program fragment is legal.
 *        std::cout << "The sum of " << v1;
 *                        << " and " << v2;
 *       << " is " << v1 + v2 << std::endl;
 *       If the program is legal, what does it do? If the program is not legal, why
 *       not? How would you fix it?
 * The program is not legal beacause there are multiple semicolons within the statement and this causes an error
 * FIX**
 * std::cout<<"The sum of "<< v1;
 * std::cout<<" and " << v2;
 * std::cout<<" is " << v1 + v2 << std::endl;
 */

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    return 0;
}

