/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 10, 2019, 6:41 PM
 */
//Exercise 3.31: Write a program to define an array of ten ints. Give each
//element the same value as its position in the array.
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int arr[10];
    int cnt=0;
    while(cnt !=10){
        arr[cnt]=cnt;
        cnt++;
    }

    return 0;
}

