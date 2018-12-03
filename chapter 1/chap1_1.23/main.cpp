/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on November 24, 2018, 10:19 PM
 * 1.23: Write a program that reads several transactions and counts
 * how many transactions occur for each ISBN.
 * 
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
    if(std::cin >> total){
        int count =1;
        while(std::cin >> total2){
            if(total.isbn() == total2.isbn()){
                ++count;
            }else{
                std::cout<<std::endl;
                std::cout<<total.isbn()<<" occurs "<<count<<std::endl;
                total = total2;
                count =1;
            }
        }
        std::cout<<total.isbn()<<" occurs "<<count<<std::endl;
    }
    return 0;
}
