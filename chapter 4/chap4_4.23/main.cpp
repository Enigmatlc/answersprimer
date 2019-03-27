/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on March 27, 2019, 1:46 PM
 */
//Exercise 4.23: The following expression fails to compile due to operator
//precedence. Using Table 4.12 (p. 166), explain why it fails. How would you
//fix it?
//the + operator has higher predecence than ?:
//string s = "word";
//string pl = s + s[s.size() - 1] == 's' ? "" : "s" ;
#include <string>
#include <iostream>

using std::cout;    using std::endl;
using std::string;
/*
 * 
 */
int main(int argc, char** argv) {
    string s = "word";
    string pl = s + (s[s.size() - 1] == 's' ? "" : "s") ;
    return 0;
}

