/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 10, 2019, 6:50 PM
 */

//Exercise 3.33: What would happen if we did not initialize the scores array
//in the program on page 116?
// count the number of grades by clusters of ten: 0--9, 10--19, ... 90--99, 100
//unsigned scores[11] = {}; // 11 buckets, all value initialized to 0
//unsigned grade;
//while (cin >> grade) {
//  if (grade <= 100)
//      ++scores[grade/10]; // increment the counter for the current cluster
//  }
//The value of the initial values of the array would be undefined
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    return 0;
}

