/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 4, 2019, 1:24 PM
 */

//Exercise 4.35: Given the following definitions,
//identify the implicit type conversions, if any, taking place:

//char cval; int ival; unsigned int ui;
//float fval; double dval;
//(a) cval = 'a' + 3; 3 a is converted to int
//(b) fval = ui - ival * 1.0; ui-ival is converted to float, but the out-of-range modulo devision will happen if ui becomes negative
//(c) dval = ui * fval; ui and fval converted to double(if fval is negative modulo devision will happen)
//(d) cval = ival + fval + dval; right operators will be converted to char by truncation
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    return 0;
}

