/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on January 19, 2019, 11:54 AM
 */

//r1= non const reference
//v2 = top level const
//p1 = non const pointer
//p2 = top level const
//p3 = top level const and low level pointer const    


//Exercise 2.31: Given the declarations in the previous exercise determine
//whether the following assignments are legal. Explain how the top-level or
//low-level const applies in each case.
//
//r1 = v2; error r1 must be const reference
//p1 = p2; p1=p2 = illegal because p1 must be top level const
//p2 = p1;  legal
//p1 = p3; illegal
//p2 = p3; legal
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    return 0;
}

