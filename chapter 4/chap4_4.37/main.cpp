/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 4, 2019, 2:40 PM
 */

//Exercise 4.37: Rewrite each of the following old-style casts to use a named
//cast:
//
//int i; double d; const string *ps; char *pc; void
//*pv;
//(a) pv = const_cast<void*(ps);
//(b) i = static_cast<int>(*pc);
//(c) pv = static_cast<void*>(&d);
//(d) pc = static_cast<char*>(pv);
//
//(a) pv = (void*)ps;
//(b) i = int(*pc);
//(c) pv = &d;
//(d) pc = (char*) pv;
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    return 0;
}

