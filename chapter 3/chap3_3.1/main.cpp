/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on January 24, 2019, 8:42 PM
 */
//Exercise 3.1: Rewrite the exercises from § 1.4.1 (p. 13) and § 2.6.2 (p. 76)
//with appropriate using declarations.
#include <iostream>
#include <string>
using std::endl;
using std::cin;
using std::cout;
using std::string;
using std::cerr;
/*
 * 
 */
struct Sales_data{
    string bookNo;
    unsigned units_sold;
    double revenue;
};
int main(int argc, char** argv) {
    
    //1.4.1
    
//    Exercise 1.9: Write a program that uses a while to sum the numbers from
//    50 to 100.
    cout<<"1.09"<<endl;
    int sum=0;
    int count=50;
    while(count<=100){
        sum +=count;
        count++;
    }
    cout<<sum<<endl;
//    Exercise 1.10: In addition to the ++ operator that adds 1 to its operand,
//    there is a decrement operator (--) that subtracts 1. Use the decrement
//    operator to write a while that prints the numbers from ten down to zero.
    cout<<"1.10"<<endl;
    int number =10;
    while(number>=0){
        cout<<number<<" ";
        number--;
    }
    cout<<endl;
//    Exercise 1.11: Write a program that prompts the user for two integers.
//    Print each number in the range specified by those two integers.
    cout<<"1.11"<<endl;
    int one=0;
    int two=0;
    cout<<"Please enter two numbers: "<<endl;
    cin>>one>>two;
    if(one>two){
        while(one>=two){
            cout<<two<<" ";
            two++;
        }
        cout<<endl;
    }
    else{
        while(one<=two){
            cout<<one<<" ";
            one++;
        }
        cout<<endl;
    }
    //2.6.2
//    Exercise 2.41: Use your Sales_data class to rewrite the exercises in §
//    1.5.1 (p. 22), § 1.5.2 (p. 24), and § 1.6 (p. 25). For now, you should define
//    your Sales_data class in the same file as your main function.
      cout<<"Exercise 1.20"<<endl;
//    Exercise 1.20: http://www.informit.com/title/032174113 contains a copy of
//    Sales_item.h in the Chapter 1 code directory. Copy that file to your
//    working directory. Use it to write a program that reads a set of book sales
//    transactions, writing each transaction to the standard output.
    Sales_data tran1,tran2;
    //
    cin>>tran1.bookNo>>tran1.units_sold>>tran1.revenue;
    cin>>tran2.bookNo>>tran2.units_sold>>tran2.revenue;
    //
    cout<<tran1.bookNo <<" "<<tran1.units_sold<<" "<<tran1.revenue<<endl;
    cout<<tran2.bookNo<<" "<<tran2.units_sold<<" "<<tran2.revenue<<endl;
//    Exercise 1.21: Write a program that reads two Sales_item objects that
//    have the same ISBN and produces their sum.
    cout<<"Exercise 1.21"<<endl;
    Sales_data tran3, tran4;
    double revenue;
    //
    cin>>tran3.bookNo>>tran3.units_sold>>revenue;
    tran3.revenue = tran3.units_sold*revenue;
    cin>>tran4.bookNo>>tran4.units_sold>>revenue;
    tran4.revenue = tran4.units_sold*revenue;
    //
    if(tran3.bookNo == tran4.bookNo){
        cout<<tran3.bookNo<<" "<<tran3.units_sold + tran4.units_sold<<" "<<tran3.revenue +tran4.revenue<<endl;
    }
    else{
        cerr<<" ISBN numbers don't match "<<endl;
        return -1;
    }
    cout<<"Exercise 1.22"<<endl;
//    Exercise 1.22: Write a program that reads several transactions for the same
//    ISBN. Write the sum of all the transactions that were read.

    Sales_data total,read;
    double price;
    double price2;
    if(cin>>total.bookNo>>total.units_sold>>price){
        total.revenue = total.units_sold * price;
        while(cin>>read.bookNo>>read.units_sold>>price2){
            read.revenue = read.units_sold * price2;
            if(read.bookNo == total.bookNo){
                total.units_sold += read.units_sold;
                total.revenue += read.revenue;
            }
            else{
                cout<<total.bookNo<<" "<<total.units_sold<<" "<<total.revenue<<" ";
                if(total.units_sold != 0){
                cout<<total.revenue/total.units_sold<<endl;
                }
                else
                    cout<<"No sales for this item"<<endl;
                total.bookNo = read.bookNo;
                total.units_sold = read.units_sold;
                total.revenue = read.revenue;
            }
        }
        cout<<total.bookNo<<" "<<total.units_sold<<" "<<total.revenue<<" ";
        if(total.units_sold != 0){
            cout<<total.revenue/total.units_sold<<endl;
        }
        else
            cout<<"No sales for this item"<<endl;
    }
//    Exercise 1.23: Write a program that reads several transactions and counts
//    how many transactions occur for each ISBN.

    
//    Exercise 1.24: Test the previous program by giving multiple transactions
//    representing multiple ISBNs. The records for each ISBN should be grouped
//    together.
    Sales_data read1,total1;
    int cnt=1;
    if(cin>>total1.bookNo>>total1.units_sold>>total1.revenue){
        while(cin>>read1.bookNo>>read1.units_sold>>read1.revenue){
            if(read1.bookNo == total1.bookNo){
                ++cnt;
            }else{
                cout<<total1.bookNo<<" appeared: "<<cnt<<endl;
                total1.bookNo = read1.bookNo;
                total1.units_sold = read1.units_sold;
                total1.revenue = read1.revenue;
                cnt =1;
            }
        }
        cout<<total1.bookNo <<" appeared: "<<cnt<<endl;
    }
//    Exercise 1.25: Using the Sales_item.h header from the Web site,
//    compile and execute the bookstore program presented in this section.
    Sales_data total3,read3;
    double price4;
    double price5;
    if(cin>>total3.bookNo>>total3.units_sold>>price4){
        total3.revenue = total3.units_sold * price4;
        while(cin>>read3.bookNo>>read3.units_sold>>price5){
            read3.revenue = read3.units_sold * price2;
            if(read3.bookNo == total3.bookNo){
                total3.units_sold += read3.units_sold;
                total3.revenue += read3.revenue;
            }
            else{
                cout<<total3.bookNo<<" "<<total3.units_sold<<" "<<total3.revenue<<" ";
                if(total3.units_sold != 0){
                cout<<total3.revenue/total3.units_sold<<endl;
                }
                else
                    cout<<"No sales for this item"<<endl;
                total3.bookNo = read3.bookNo;
                total3.units_sold = read3.units_sold;
                total3.revenue = read3.revenue;
            }
        }
        cout<<total3.bookNo<<" "<<total3.units_sold<<" "<<total3.revenue<<" ";
        if(total3.units_sold != 0){
            cout<<total3.revenue/total3.units_sold<<endl;
        }
        else
            cout<<"No sales for this item"<<endl;
    }
    return 0;
}

