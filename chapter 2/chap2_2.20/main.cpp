/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on December 5, 2018, 7:49 PM
 */
//2.20: What does the following program do?
//int i = 42;
//int *p1 = &i;
//*p1 = *p1 * *p1;

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int i = 42; //defines i
    int *p1 = &i; //initializes p1 with address of i
    *p1 = *p1 * *p1; //assigns i with the value (42 * 42)=1764
    return 0;
}

