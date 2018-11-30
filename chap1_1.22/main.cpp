/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on November 24, 2018, 4:12 PM
 * 1.22: Write a program that reads several transactions for the same
 * ISBN. Write the sum of all the transactions that were read.
 */

#include <cstdlib>
#include "Sales_item.h"
#include <iostream>
using namespace std;

/*
 * 
 */
int main()
{
    Sales_item total, total2;
    if(std::cin>>total){

        while(cin>> total2){
           if(total.isbn()==total2.isbn()){
               total=total+total2;
           }
           else{
               std::cout<<total<<std::endl;
               total=total2;
           }
        }
        std::cout<<total<<std::endl;
    }else{
        std::cerr<<"error"<<std::endl;
    }

    return 0;
}