/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on November 24, 2018, 11:42 PM
 * 1.25: Using the Sales_item.h header from the Web site,
 * compile and execute the bookstore program presented in this section.
 * 
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main() {
  Sales_item total;
  if (std::cin >> total) {
    Sales_item trans;
    while (std::cin >> trans) {
      if (total.isbn() == trans.isbn())
        total += trans;
      else {
        std::cout << total << std::endl;
        total = trans;
      }
    }
    std::cout << total << std::endl;
  } else {
    std::cerr << "No data!" << std::endl;
    return -1;
  }
  return 0;
}
