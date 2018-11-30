/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on November 24, 2018, 3:13 PM
 * 1.17: What happens in the program presented in this section if the
 * input values are all equal? What if there are no duplicated values?
 * 
 */

#include <iostream>

/*
 * 
 */
int main() {
    // currVal is the number we're counting; we'll read new values into val
int currVal = 0, val = 0;
// read first number and ensure that we have data to process
if (std::cin >> currVal) {
    int cnt = 1; // store the count for the current value we're processing
    while (std::cin >> val) { // read the remaining numbers
        if (val == currVal) // if the values are the same
            ++cnt; // add 1 to cnt
        else { // otherwise, print the count for the previous value
            std::cout << currVal << " occurs "<< cnt << " times" << std::endl;
            currVal = val; // remember the new value
            cnt = 1; // reset the counter
            }
        } // while loop ends here
        // remember to print the count for the last value in the file
        std::cout << currVal << " occurs "<< cnt << " times" << std::endl;
    } // outermost if statement ends here
    return 0;
}
//all values are equal
/*42 42 42 42 42 42 42 42 
42 occurs 8 times
*/

//no duplicates
/*42 43 45 46 48 47 49    
42 occurs 1 times
43 occurs 1 times
45 occurs 1 times
46 occurs 1 times
48 occurs 1 times
47 occurs 1 times
49 occurs 1 times
*/
