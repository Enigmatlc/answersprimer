/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 7, 2019, 2:12 PM
 */

//Exercise 3.24: Redo the last exercise from § 3.3.3 (p. 105) using iterators

//3.3.3
//Exercise 3.20: Read a set of integers into a vector. Print the sum of each
//pair of adjacent elements. Change your program so that it prints the sum of
//the first and last elements, followed by the sum of the second and second-tolast,
//and so on.

#include <iostream>
#include <vector>

using std::vector;  using std::cin;
using std::cout;    using std::endl;


/*
 * 
 */
int main(int argc, char** argv) {
    vector<int> vec;
    for(int read=0;cin>>read;vec.push_back(read));
    //part a
    for(auto iter = vec.cbegin();iter != vec.cend()-1;++iter){
        cout<<*iter+*(iter+1)<<" ";
        
    }
    cout<<endl;
    //part b
    auto mid = vec.cend();
    auto end =vec.cend();
    for(auto iter = vec.cbegin();iter != mid;iter++){
        cout<<*iter+*end<<" ";
        --end;
    }
    return 0;
}

