/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 2, 2019, 11:21 AM
 */
//Exercise 4.25: What is the value of ~'q' << 6 on a machine with 32-bit
//ints and 8 bit chars, that uses Latin-1 character set in which 'q' has the
//bit pattern 01110001?

//~0000000 00000000 00000000 01110001
//11111111 11111111 11111111 10001110 << 6
//undefined behavior since the int became a negative number(most-significant-bit is set to 1) and changing a negative number with a left shift operator is undefined.
