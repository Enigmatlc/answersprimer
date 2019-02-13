/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 13, 2019, 10:40 AM
 */
//Exercise 3.43: Write three different versions of a program to print the
//elements of ia. One version should use a range for to manage the
//iteration, the other two should use an ordinary for loop in one case using
//subscripts and in the other using pointers. In all three programs write all the
//types directly. That is, do not use a type alias, auto, or decltype to
//simplify the code.
#include <iostream>
#include <iterator>

using std::cout;    using std::endl;
using std::end;     using std::begin;



/*
 * 
 */
int main(int argc, char** argv) {
    int ia[3][4] = {
    {0, 1, 2, 3},
    {4, 5, 6, 7},
    {8, 9, 10, 11}
    };
    //range for loop
    cout<<"range for loop"<<endl;
    for (auto &row : ia){ // for every element in the outer array
        for (auto &col : row) // for every element in the inner array
            cout<<col<<" ";
        cout<<endl;
    }
    //for loop subscripting
    cout<<" For loop with subscripting"<<endl;
    for (size_t i = 0; i != 3; ++i) {
        for (size_t j = 0; j != 4; ++j) {
            cout<<ia[i][j]<<" ";
        }
        cout<<endl;
    }
        //for loop with pointers
    cout<<" For loop with pointers"<<endl;
     for(int (*i)[4] = ia; i != ia + 3; ++i)
    {
        for(int *j = *i; j != *i + 4; ++j)
            cout << *j << " ";
        cout << endl;
    }
    return 0;
}

