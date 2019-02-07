/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 5, 2019, 11:25 AM
 */
//Exercise 3.15: Repeat the previous program but read strings this time.
#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::string;
using std::vector;


/*
 * 
 */
int main(int argc, char** argv) {
    vector<string> vec;
    string read;
    while(cin>>read){
        vec.push_back(read);
    }
    return 0;
}

