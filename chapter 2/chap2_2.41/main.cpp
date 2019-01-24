/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on January 23, 2019, 5:06 PM
 */

//Exercise 2.41: Use your Sales_data class to rewrite the exercises in §
//1.5.1 (p. 22), § 1.5.2 (p. 24), and § 1.6 (p. 25). For now, you should define
//your Sales_data class in the same file as your main function.

#include <cstdlib>
#include <string>
#include <iostream>

struct Sales_data{
    std::string bookNo;
    unsigned units_sold;
    double revenue;
};
int main(int argc, char** argv) {
    std::cout<<"Exercise 1.20"<<std::endl;
//    Exercise 1.20: http://www.informit.com/title/032174113 contains a copy of
//    Sales_item.h in the Chapter 1 code directory. Copy that file to your
//    working directory. Use it to write a program that reads a set of book sales
//    transactions, writing each transaction to the standard output.
    Sales_data tran1,tran2;
    //
    std::cin>>tran1.bookNo>>tran1.units_sold>>tran1.revenue;
    std::cin>>tran2.bookNo>>tran2.units_sold>>tran2.revenue;
    //
    std::cout<<tran1.bookNo <<" "<<tran1.units_sold<<" "<<tran1.revenue<<std::endl;
    std::cout<<tran2.bookNo<<" "<<tran2.units_sold<<" "<<tran2.revenue<<std::endl;
//    Exercise 1.21: Write a program that reads two Sales_item objects that
//    have the same ISBN and produces their sum.
    std::cout<<"Exercise 1.21"<<std::endl;
    Sales_data tran3, tran4;
    double revenue;
    //
    std::cin>>tran3.bookNo>>tran3.units_sold>>revenue;
    tran3.revenue = tran3.units_sold*revenue;
    std::cin>>tran4.bookNo>>tran4.units_sold>>revenue;
    tran4.revenue = tran4.units_sold*revenue;
    //
    if(tran3.bookNo == tran4.bookNo){
        std::cout<<tran3.bookNo<<" "<<tran3.units_sold + tran4.units_sold<<" "<<tran3.revenue +tran4.revenue<<std::endl;
    }
    else{
        std::cerr<<" ISBN numbers don't match "<<std::endl;
        return -1;
    }
    std::cout<<"Exercise 1.22"<<std::endl;
//    Exercise 1.22: Write a program that reads several transactions for the same
//    ISBN. Write the sum of all the transactions that were read.

    Sales_data total,read;
    double price;
    double price2;
    if(std::cin>>total.bookNo>>total.units_sold>>price){
        total.revenue = total.units_sold * price;
        while(std::cin>>read.bookNo>>read.units_sold>>price2){
            read.revenue = read.units_sold * price2;
            if(read.bookNo == total.bookNo){
                total.units_sold += read.units_sold;
                total.revenue += read.revenue;
            }
            else{
                std::cout<<total.bookNo<<" "<<total.units_sold<<" "<<total.revenue<<" ";
                if(total.units_sold != 0){
                std::cout<<total.revenue/total.units_sold<<std::endl;
                }
                else
                    std::cout<<"No sales for this item"<<std::endl;
                total.bookNo = read.bookNo;
                total.units_sold = read.units_sold;
                total.revenue = read.revenue;
            }
        }
        std::cout<<total.bookNo<<" "<<total.units_sold<<" "<<total.revenue<<" ";
        if(total.units_sold != 0){
            std::cout<<total.revenue/total.units_sold<<std::endl;
        }
        else
            std::cout<<"No sales for this item"<<std::endl;
    }
//    Exercise 1.23: Write a program that reads several transactions and counts
//    how many transactions occur for each ISBN.
    
//    Exercise 1.24: Test the previous program by giving multiple transactions
//    representing multiple ISBNs. The records for each ISBN should be grouped
//    together.
    Sales_data read1,total1;
    int cnt=1;
    if(std::cin>>total1.bookNo>>total1.units_sold>>total1.revenue){
        while(std::cin>>read1.bookNo>>read1.units_sold>>read1.revenue){
            if(read1.bookNo == total1.bookNo){
                ++cnt;
            }else{
                std::cout<<total1.bookNo<<" appeared: "<<cnt<<std::endl;
                total1.bookNo = read1.bookNo;
                total1.units_sold = read1.units_sold;
                total1.revenue = read1.revenue;
                cnt =1;
            }
        }
        std::cout<<total1.bookNo <<" appeared: "<<cnt<<std::endl;
    }
//    Exercise 1.25: Using the Sales_item.h header from the Web site,
//    compile and execute the bookstore program presented in this section.
    Sales_data total3,read3;
    double price4;
    double price5;
    if(std::cin>>total3.bookNo>>total3.units_sold>>price4){
        total3.revenue = total3.units_sold * price4;
        while(std::cin>>read3.bookNo>>read3.units_sold>>price5){
            read3.revenue = read3.units_sold * price2;
            if(read3.bookNo == total3.bookNo){
                total3.units_sold += read3.units_sold;
                total3.revenue += read3.revenue;
            }
            else{
                std::cout<<total3.bookNo<<" "<<total3.units_sold<<" "<<total3.revenue<<" ";
                if(total3.units_sold != 0){
                std::cout<<total3.revenue/total3.units_sold<<std::endl;
                }
                else
                    std::cout<<"No sales for this item"<<std::endl;
                total3.bookNo = read3.bookNo;
                total3.units_sold = read3.units_sold;
                total3.revenue = read3.revenue;
            }
        }
        std::cout<<total3.bookNo<<" "<<total3.units_sold<<" "<<total3.revenue<<" ";
        if(total3.units_sold != 0){
            std::cout<<total3.revenue/total3.units_sold<<std::endl;
        }
        else
            std::cout<<"No sales for this item"<<std::endl;
    }
    
    return 0;
}

