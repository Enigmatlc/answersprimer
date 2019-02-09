/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 9, 2019, 10:37 AM
 */

//Exercise 3.25: Rewrite the grade clustering program from § 3.3.3 (p. 104)
//using iterators instead of subscripts.

#include <iostream>
#include <vector>

using std::vector;  using std::cin;


/*
 * 
 */
int main(int argc, char** argv) {
    vector<unsigned> scores (11,0);
    unsigned grade;
    auto iter = scores.begin();
    while(cin>>grade){
        if(grade <=100)
            *(iter+(grade/10))+=1;
        iter=scores.begin();
    }

    return 0;
}

