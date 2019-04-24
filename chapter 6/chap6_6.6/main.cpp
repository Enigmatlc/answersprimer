/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 21, 2019, 12:00 AM
 */
//Exercise 6.6: Explain the differences between a parameter, a local variable,
//and a local static variable. Give an example of a function in which each
//might be useful.

// Objects that exist only while a block is executing are known as automatic objects. After execution
//exits a block, the values of the automatic objects created in that block are undefined.
//Parameters are automatic objects. Storage for the parameters is allocated when the
//function begins. Parameters are defined in the scope of the function body. Hence they
//are destroyed when the function terminates.

//parameters have to be ininialized when the function is called(parameters are use to pass data to a function)
//        
//local variables only exist while the function is running(can be used to store data while a funtion a running)
//
//static variables exist while the program is running(can be useful to keep count of how many times a function has been called)
