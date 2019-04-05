/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 4, 2019, 8:18 PM
 */

//Exercise 5.4: Explain each of the following examples, and correct any
//problems you detect.
//string::iterator iter=s.begin();
//(a) while (iter != s.end()) { /* . . . */ } iter is never initialized

//(b) while (bool status = find(word)) { /* . . . */ }
//if (!status) { /* . . . */ }//cant use variable that was created inside the control structure of another statement

