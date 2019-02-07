/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 5, 2019, 11:31 AM
 */

//Exercise 3.16: Write a program to print the size and contents of the
//vectors from exercise 3.13. Check whether your answers to that exercise
//were correct. If not, restudy § 3.3.1 (p. 97) until you understand why you
//were wrong.

//3.13
//(a) vector<int> v1; none
//(b) vector<int> v2(10); ten default initialized elements
//(c) vector<int> v3(10, 42); ten elements initialized with the number 42
//(d) vector<int> v4{10}; one element that contains the number 10
//(e) vector<int> v5{10, 42}; two elements 10 and 42
//(f) vector<string> v6{10}; ten empty string elements
//(g) vector<string> v7{10, "hi"}; 10 strings initialized with the word "hi".

#include <vector>
#include <iostream>
#include <string>

using std::vector;  using std::cout;
using std::endl;    using std::string;
c
/*
 * 
 */
int main(int argc, char** argv) {
    //v1
    vector<int> v1;
    cout<<"V1"<<" size: "<<v1.size()<<endl;
    for(auto c:v1)
        cout<<c<<" ";
    cout<<endl;
    //v2
    vector<int> v2(10);
    cout<<"V2"<<" size: "<<v2.size()<<endl;
    for(auto c:v2)
        cout<<c<<" ";
    cout<<endl;
    //v3
    vector<int> v3(10, 42);
    cout<<"V3"<<" size: "<<v3.size()<<endl;
    for(auto c:v3)
        cout<<c<<" ";
    cout<<endl;
    //v4
    vector<int> v4{10};
    cout<<"V4"<<" size: "<<v4.size()<<endl;
    for(auto c:v4)
        cout<<c<<" ";
    cout<<endl;
    //v5
    vector<int> v5{10, 42};
    cout<<"V5"<<" size: "<<v5.size()<<endl;
    for(auto c:v5)
        cout<<c<<" ";
    cout<<endl;
    //v6
    vector<string> v6{10};
    cout<<"V6"<<" size: "<<v6.size()<<endl;
    for(auto c:v6)
        cout<<c<<" ";
    cout<<endl;
    //v7
    vector<string> v7{10, "hi"};
    cout<<"V7"<<" size: "<<v7.size()<<endl;
    for(auto c:v7)
        cout<<c<<" ";
    cout<<endl;
    
    return 0;
}

