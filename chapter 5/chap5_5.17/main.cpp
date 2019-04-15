/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 15, 2019, 12:34 PM
 */
//Exercise 5.17: Given two vectors of ints, write a program to determine
//whether one vector is a prefix of the other. For vectors of unequal
//length, compare the number of elements of the smaller vector. For
//example, given the vectors containing 0, 1, 1, and 2 and 0, 1, 1, 2, 3, 5,
//8, respectively your program should return true.

#include <vector>
#include <iostream>


using std::endl;    using std::cout;
using std::vector;  
/*
 * 
 */
int main(int argc, char** argv) {
    bool eq = true;
    vector<int> vec{0,1,1,2},vec2{0,1,1,2,3,4,5,8};
    auto smler=(vec.size() <= vec2.size()) ? vec.size():vec2.size();
    for(auto cnt=0;cnt != smler && eq != false;++cnt){
        if(!(vec[cnt] == vec2[cnt])){
            eq = false;
        }
    }
    if(eq){
        cout<<"vector 1 is a prefix of the other"<<endl;
    }
    else
        cout<<"vector 1 is not prefix of the other"<<endl;

    return 0;
}

