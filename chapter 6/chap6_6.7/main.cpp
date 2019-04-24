/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 21, 2019, 12:06 AM
 */
//Exercise 6.7: Write a function that returns 0 when it is first called and then
//generates numbers in sequence each time it is called again.
#include <iostream>

using std::cout;    using std::endl;


/*
 * 
 */
size_t count_calls()
{
    static size_t ctr = 0; // value will persist across calls
    return ctr++;
}
int main(int argc, char** argv) {
    for (size_t i = 0; i != 10; ++i)
        cout << count_calls() << endl;
    return 0;
}

