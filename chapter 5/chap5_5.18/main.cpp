/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 17, 2019, 6:16 PM
 */
//Exercise 5.18: Explain each of the following loops. Correct any problems
//you detect.
//

//(a) do
//int v1, v2;
//cout << "Please enter two numbers to sum:" ;
//if (cin >> v1 >> v2)
//cout << "Sum is: " << v1 + v2 << endl;
//while (cin);
//
//(b) do {
//// . . .
//} while (ival = get_response());
//

//(c) do {
//int ival = get_response();
//
//} while (ival);

//ANSWERS 

//(a) do // prints the sum of v1 and v2 while cin is valid.
//int v1, v2;
//cout << "Please enter two numbers to sum:" ;
//if (cin >> v1 >> v2)
//cout << "Sum is: " << v1 + v2 << endl;
//while (cin);
//
//int ival=0;
//(b) do {
//// . . .
//} while (ival = get_response());
//

//(c) do {//gets the value of ival then it its true if its zero
//int ival = get_response();
//
//} while (ival);