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
 * 1.24: Test the previous program by giving multiple transactions
 * representing multiple ISBNs. The records for each ISBN should be grouped
 * together.
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
    Sales_item total, currval;
    if(std::cin >> total){
        int count =1;
        while(std::cin >> currval){
            if(total.isbn() == currval.isbn()){
                total+=currval;
                ++count;
            }else{
                std::cout<<std::endl;
                std::cout<<total<<" Count: "<<count<<std::endl;
                total = currval;
                count =1;
            }
        }
        std::cout<<total <<" Count: "<<count<<std::endl;
    }
    return 0;
}
