/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on January 19, 2019, 11:46 AM
 */

//Exercise 2.30: For each of the following declarations indicate whether the
//object being declared has top-level or low-level const.

//const int v2 = 0; int v1 = v2; v2 = top level, v1 non const
//int *p1 = &v1, &r1 = v1;  p1 points to v1(non const),r1 references v1(non const)
//const int *p2 = &v2, *const p3 = &i, &r2 = v2;p2(low level) points to top level,p3(top level and low level) points to non const i(int),r2(low level) points to low level

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    return 0;
}

