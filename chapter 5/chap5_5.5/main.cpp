/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 5, 2019, 7:16 PM
 */
//Exercise 5.5: Using an if–else statement, write your own version of the
//program to generate the letter grade from a numeric grade.
#include <iostream>
#include <vector>
#include <string>
using std::cout;    using std::endl;
using std::vector;  using std::string;
/*
 * 
 */
int main(int argc, char** argv) {
    vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    string lettergrade;
    int grade{80};
    if (grade < 60)
        lettergrade = scores[0];
    else {
        lettergrade = scores[(grade - 50)/10]; // fetch the letter grade
    if (grade != 100) // add plus or minus only if not already an A++
        if (grade % 10 >= 3) {
            if (grade % 10 > 7)
                lettergrade += '+'; // grades ending in 8 or 9 get a +
        } else // curlies force the else to go with the outer if
            lettergrade += '-'; // grades ending in 0, 1, or 2 will get a minus
    }
    cout<<lettergrade<<endl;
    return 0;
}

