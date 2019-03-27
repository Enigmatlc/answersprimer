/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on March 26, 2019, 2:26 PM
 */

//Exercise 4.21: Write a program to use a conditional operator to find the
//elements in a vector<int> that have odd value and double the value of
//each such element.

#include <iostream>
#include <vector>
#include <string>

using std::cout;    using std::endl;
using std::vector;  using std::string;

/*
 * 
 */
int main(int argc, char** argv) {
    vector<int> vec={1,2,3,4,5,6,7,8,9,10};
    auto it=vec.begin();
    for(auto it=vec.begin();it != vec.end();it++){
        if((*it % 2) ? 1:0)
            *it*=2;
    }
    for(auto c: vec)
        cout<<c<<endl;
    return 0;
}

