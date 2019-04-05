/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 5, 2019, 7:28 PM
 */
//Exercise 5.6: Rewrite your grading program to use the conditional operator
//(§ 4.7, p. 151) in place of the if–else statement.
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
    int grade{100};
    if (grade < 60)
        lettergrade = scores[0];
    else {
        lettergrade = scores[(grade - 50)/10]; // fetch the letter grade
    if (grade != 100) // add plus or minus only if not already an A++
        lettergrade += ((grade % 10 >= 3) && (grade % 10 > 7))  ? '+' : '-';
    }
    cout<<lettergrade<<endl;
    //100 = A++
    //90 = A-
    //88= B+
    //80 = B-
    //60 = D-
    //59 = F-
    return 0;
}
