/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 5, 2019, 12:18 PM
 */
//Exercise 3.17: Read a sequence of words from cin and store the values a
//vector. After you’ve read all the words, process the vector and change
//each word to uppercase. Print the transformed elements, eight words to a
//line.
#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::cin;     using std::cout;
using std::endl;    using std::vector;
using std::string;


/*
 * 
 */
int main(int argc, char** argv) {
    string read;
    string tmp=" ";
    vector<string> vec;
    int cnt=0;
    while(cnt<19){
        cin>>read;
        vec.push_back(read);
        cnt++;
    }
    for(auto v_sze=0;v_sze<=vec.size()-1;v_sze++){
        tmp=vec[v_sze];
        for(auto w_sze=0;w_sze<=tmp.size()-1;w_sze++){
            tmp[w_sze]=toupper(tmp[w_sze]);
        }
        vec[v_sze]=tmp;
    }
    for(auto lines = 0;lines<=vec.size()-1;lines++){
        if(lines !=0 && lines%8==0)
            cout<<endl;
        cout<<vec[lines]<<" ";
    }
    return 0;
}

