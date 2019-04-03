/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 3, 2019, 1:14 PM
 */

//Exercise 4.28: Write a program to print the size of each of the built-in
//types.

#include <iostream>

using std::cout;    using std::endl;
/*
 * 
 */
int main(int argc, char** argv) {
    cout<<sizeof(char)<<" char"<<endl;
    cout<<sizeof(char16_t)<<" char16_t"<<endl;
    cout<<sizeof(char32_t)<<" char32_t"<<endl;
    cout<<sizeof(wchar_t)<<" wchar_t"<<endl;
    cout<<sizeof(short)<<" short"<<endl;
    cout<<sizeof(int)<<" int"<<endl;
    cout<<sizeof(long)<<" long"<<endl;
    cout<<sizeof(long int)<<" long int"<<endl;
    cout<<sizeof(long long int)<<" long long int"<<endl;
    cout<<sizeof(float)<<" float"<<endl;
    cout<<sizeof(double)<<" double"<<endl;
    cout<<sizeof(long double)<<" long double"<<endl;
    cout<<sizeof(bool)<<" bool"<<endl;
    cout<<sizeof(void)<<" void"<<endl;
    return 0;
}

