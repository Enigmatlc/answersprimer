/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on March 25, 2019, 12:27 PM
 */

//Exercise 4.5: Determine the result of the following expressions.
//(a) -30 * 3 + 21 / 5
//(b) -30 + 3 * 21 / 5
//(c) 30 / 3 * 21 % 5
//(d) -30 / 3 * 21 % 4

#include <iostream>

using std::cout;    using std::endl;

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //a
    cout<<((-30*3)+(21/5))<<endl;
    //b
    cout<<(-30 + ((3 * 21) / 5))<<endl;
    //c
    cout<< (((30 / 3) * 21) % 5)<<endl;
    //d
    cout<<(((-30 / 3) * 21) % 4)<<endl;
    return 0;
}

