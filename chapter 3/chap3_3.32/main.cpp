/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 10, 2019, 6:44 PM
 */
//Exercise 3.32: Copy the array you defined in the previous exercise into
//another array. Rewrite your program to use vectors.
#include <iostream>
#include <vector>


using std::cout; using std::vector;
/*
 * 
 */
int main(int argc, char** argv) {
    int arr[10];
    vector<int> vec;
    vector<int> vec2;
    int cnt=0;
    int arr2[10];
    while(cnt !=10){
        vec.push_back(cnt);
        arr[cnt]=cnt;
        cnt++;
    }
    cnt=0;
    vec2=vec;
    while(cnt != 10){
        arr2[cnt]=arr[cnt];
        cnt++;
    }

    return 0;
}

