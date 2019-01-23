/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on January 23, 2019, 11:56 AM
 */
//Exercise 2.39: Compile the following program to see what happens when
//you forget the semicolon after a class definition. Remember the message for
//future reference.
//
//struct Foo { /* empty */ } // Note: no semicolon
//int main()
//{
//return 0;
//}

#include <cstdlib>

using namespace std;

/*
 * 
 */
//ERROR CODE: main.cpp:30:27: error: expected ';' after struct definition
struct Foo { /* empty */ } // Note: no semicolon
int main(int argc, char** argv) {
    
    return 0;
}

