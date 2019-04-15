/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 15, 2019, 12:20 PM
 */
//Exercise 5.15: Explain each of the following loops. Correct any problems
//you detect.
//(a) for (int ix = 0; ix != sz; ++ix) { /* . . . */ }
//if (ix != sz)
//// . . .
//(b) int ix;
//for (ix != sz; ++ix) { /* . . . */ }
//(c) for (int ix = 0; ix != sz; ++ix, ++ sz) { /* . . . */ }



//(a) for (int ix = 0; ix != sz; ++ix) { /* . . . */ } the loop increases until the value of sz is reached.
//if (ix != sz)ERROR: ix was declared inside the scope of the for loop, so it cannot be used after the loop has ended
//// . . .

//(b) int ix;
//for (ix != sz; ++ix) { /* . . . */ } ERROR:there is no void statement in the for loop

//(c) for (int ix = 0; ix != sz; ++ix, ++ sz) { /* . . . */ } the loop will keep increasing ix and sz until the body of the loop ends the loop or it can keep going for ever.
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    return 0;
}

