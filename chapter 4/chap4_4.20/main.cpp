/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on March 26, 2019, 11:49 AM
 */

//Exercise 4.20: Assuming that iter is a vector<string>::iterator,
//indicate which, if any, of the following expressions are legal. Explain the
//behavior of the legal expressions and why those that aren’t legal are in error.
//(a) *iter++;it increases the the object it iter points to by one using the postfix operator
//(b) (*iter)++;illegal: dereference operator is applied to the iter first then the value pointed to by the object is increased by one 
//(c) *iter.empty();ILEEGAL: *iter does not have a member named empty().
//(d) iter->empty(); same as (*iter).empty();.it calls the .empty() string member function.
//(e) ++*iter;ILLEGAL: cant increase a string
//(f) iter++->empty(); it increases the current object iter points to by one then it calls the empty() string member function
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    return 0;
}

