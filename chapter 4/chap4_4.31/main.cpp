/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 3, 2019, 1:48 PM
 */
//Exercise 4.31: The program in this section used the prefix increment and
//decrement operators. Explain why we used prefix and not postfix. What
//changes would have to be made to use the postfix versions? Rewrite the
//program using postfix operators. because it requires less resources to use the prefix operator. Both post and pre work the same way in this program.
#include <vector>

using std::vector;
/*
 * 
 */
int main(int argc, char** argv) {
    vector<int> ivec(10);
    vector<int>::size_type cnt = ivec.size();
// assign values from size... 1 to the elements in ivec
for(vector<int>::size_type ix = 0;ix != ivec.size(); ix++, cnt++)
        ivec[ix] = cnt;
    return 0;
}

