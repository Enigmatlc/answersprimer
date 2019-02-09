/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 9, 2019, 10:49 AM
 */
//Exercise 3.26: In the binary search program on page 112, why did we write
//mid = beg + (end - beg) / 2; instead of mid = (beg + end)
///2;?

//you cant add two iterators because there is no + for iterators.
