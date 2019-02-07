/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 5, 2019, 2:24 PM
 */
//Exercise 3.19: List three ways to define a vector and give it ten elements,
//each with the value 42. Indicate whether there is a preferred way to do so
//and why.

#include <vector>

using std::vector;
/*
 * 
 */
int main(int argc, char** argv) {
    vector<int> vec1(10,42);//preferred method if the same value has to be stored in all the elements.
    vector<int> vec2={42,42,42,42,42,42,42,42,42,42};
    vector<int> vec3;
    int cnt = 0;
    while(cnt<10){
        vec3.push_back(42);
        cnt++;
    }
    return 0;
}

