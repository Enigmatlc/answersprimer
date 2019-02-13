/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 11, 2019, 9:14 PM
 */
//Exercise 3.36: Write a program to compare two arrays for equality. Write a
//similar program to compare two vectors.
#include <iostream>
#include <iterator>
#include <vector>
using std::cout;    using std::endl;
using std::begin;   using std::end;
using std::vector;

/*
 * 
 */
//not finished.
int main(int argc, char** argv) {
    int arr[]={1,2,3,4,5};
    int arr2[]={1,2,3,4,5};
    vector<int> vec={1,2,3,4,5};
    vector<int> vec2={1,2,3,4,5};
    auto arbegin=begin(arr),arend=end(arr);
    auto arbegin2=begin(arr2),arend2=end(arr2);
    //vector comparison
    if(vec == vec2)
        cout<<"vectors are equal"<<endl;
    else
        cout<<"vectors are not equal"<<endl;
    //array comparison
    while(arbegin != arend && arbegin2 != arend2 && arbegin != arend && arbegin2 != arend2){
        if(*arbegin == *arbegin2){
            cout<<"array is equal"<<endl;
        }
        else{
            cout<<"array is not equal"<<endl;
            return -1;
        }
        arbegin++;
        arbegin2++;
                    
    }
    
    return 0;
}

