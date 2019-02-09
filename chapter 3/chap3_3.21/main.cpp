/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 8, 2019, 7:28 PM
 */
//Exercise 3.21: Redo the first exercise from § 3.3.3 (p. 105) using iterators.
//3.3.3
//Exercise 3.16: Write a program to print the size and contents of the
//vectors from exercise 3.13. Check whether your answers to that exercise
//were correct. If not, restudy § 3.3.1 (p. 97) until you understand why you
//were wrong.
#include <vector>
#include <iostream>
#include <string>

using std::vector;  using std::cout;
using std::endl;    using std::string;
/*
 * 
 */
int main(int argc, char** argv) {
    //v1
    vector<int> v1;
    cout<<"V1"<<" size: "<<v1.size()<<endl;
    for(auto iter=v1.cbegin();iter!=v1.cend();iter++){
        cout<<*iter<<" ";
    }
     cout<<endl;
    //v2
    vector<int> v2(10);
    cout<<"V2"<<" size: "<<v2.size()<<endl;
    for(auto iter=v2.cbegin();iter!=v2.cend();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    //v3
    vector<int> v3(10, 42);
    cout<<"V3"<<" size: "<<v3.size()<<endl;
    for(auto iter=v3.cbegin();iter!=v3.cend();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    //v4
    vector<int> v4{10};
    cout<<"V4"<<" size: "<<v4.size()<<endl;
    for(auto iter=v4.cbegin();iter!=v4.cend();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    //v5
    vector<int> v5{10, 42};
    cout<<"V5"<<" size: "<<v5.size()<<endl;
   for(auto iter=v5.cbegin();iter!=v5.cend();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    //v6
    vector<string> v6{10};
    cout<<"V6"<<" size: "<<v6.size()<<endl;
   for(auto iter=v6.cbegin();iter!=v6.cend();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    //v7
    vector<string> v7{10, "hi"};
    cout<<"V7"<<" size: "<<v7.size()<<endl;
   for(auto iter=v7.cbegin();iter!=v7.cend();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    
    return 0;
}
