/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on January 18, 2019, 3:50 PM
 */

//Exercise 2.27: Which of the following initializations are legal? Explain why.
//(a) int i = -1, &r = 0; i = LEGAL, r =ILLEGAL(not a const reference)
//(b) int *const p2 = &i2; LEGAL
//(c) const int i = -1, &r = 0; I=LEGAL, r= LEGAL
//(d) const int *const p3 = &i2; LEGAL
//(e) const int *p1 = &i2; LEGAL
//(f) const int &const r2; ILLEGAL( cant apply const to reference)
//(g) const int i2 = i, &r = i; i2 =LEGAL, r=LEGAL
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    return 0;
}

