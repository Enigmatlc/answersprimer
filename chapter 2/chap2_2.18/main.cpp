/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on December 5, 2018, 7:37 PM
 */

//2.18: Write code to change the value of a pointer. Write code to
//change the value to which the pointer points.

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//    Write code to change the value of a pointer.
    int num ,*p1 =&num;
    int num2 =34;
    p1=&num2;

//Write code to change the value to which the pointer points.
    *p1=56;
    return 0;
}

