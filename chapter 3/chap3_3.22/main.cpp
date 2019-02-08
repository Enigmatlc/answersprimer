/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on February 7, 2019, 6:28 PM
 */

//Exercise 3.22: Revise the loop that printed the first paragraph in text to
//instead change the elements in text that correspond to the first paragraph
//to all uppercase. After you’ve updated text, print its contents.

#include <string>
#include <vector>
#include <iostream>
#include <cctype>

using std::vector;   using std::string;
using std::cout;    using std::endl;
using std::toupper; using std::isalpha;
using std::isspace; using std::getline;
using std::cin;

/*
 * 
 */
int main(int argc, char** argv) {
    vector<string> text;
    string tmp;
    for(string read;getline(cin,read);text.push_back(read));
    
    for(auto iter = text.begin();iter != text.end();iter++){
        tmp = *iter;//assings line to tmp
        for(auto cnt = 0;cnt != tmp.size();cnt++){
            if(isalpha(tmp[cnt]) && !isspace(tmp[cnt]))//checks if tmp is alphabet or !space
                tmp[cnt]=toupper(tmp[cnt]);
        }
        cout<<tmp<<endl;
    }
    

    return 0;
}

