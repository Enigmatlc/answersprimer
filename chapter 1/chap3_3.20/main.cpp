/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 6, 2019, 5:47 PM
 */
//Exercise 3.20: Read a set of integers into a vector. Print the sum of each
//pair of adjacent elements. Change your program so that it prints the sum of
//the first and last elements, followed by the sum of the second and second-tolast,
//and so on.
#include <iostream>
#include <vector>

using std::vector;  using std::endl;
using std::cout;    using std::cin;


/*
 * 
 */
int main(int argc, char** argv) {
    vector<int> vec;
    for(int read;cin>>read;vec.push_back(read));
    //part b
    auto mid= (vec.size()+ 1)/2;
    auto sze=vec.size()-1;
    for(int i=0;i != mid;i++){
        cout<<vec[i]+vec[sze]<<" ";
        sze--;
    }
    return 0;
}

