/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 13, 2019, 9:33 AM
 */
//Exercise 3.42: Write a program to copy a vector of ints into an array of
//ints.
#include <vector>
#include <iostream>
#include <iterator>

using std::vector;  using std::end;
using std::begin;   using std::endl;
using std::cout;


/*
 * 
 */
int main(int argc, char** argv) {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    vector<int> vec;
    auto arend=end(arr),arbegin(arr);
    while(arbegin != arend){
        vec.push_back(*arbegin);
        arbegin++;
    }
    for(auto c: vec)
        cout<<c<<endl;
    return 0;
}

