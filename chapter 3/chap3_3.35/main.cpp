/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 11, 2019, 9:08 PM
 */
//Exercise 3.35: Using pointers, write a program to set the elements in an
//array to zero.
#include <iostream>
#include <iterator>

using std::cout;    using std::endl;
using std::begin;   using std::end;
/*
 * 
 */
int main(int argc, char** argv) {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    auto arbegin=begin(arr),arend=end(arr);
    while(arbegin != arend){
        *arbegin=0;
        arbegin++;
    }
    for(auto c:arr)
        cout<<c<<" ";
    return 0;
}

