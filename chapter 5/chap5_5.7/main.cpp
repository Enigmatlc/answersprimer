/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Enigmatic
 *
 * Created on April 5, 2019, 7:42 PM
 */
//Exercise 5.7: Correct the errors in each of the following code fragments:

//(a) if (ival1 != ival2)
//ival1 = ival2
//else ival1 = ival2 = 0;
//(b) if (ival < minval)
//minval = ival;
//occurs = 1;
//Click here to view code image
//(c) if (int ival = get_value())
//cout << "ival = " << ival << endl;
//if (!ival)
//cout << "ival = 0\n";
//(d) if (ival = 0)
//ival = get_value();

//ANSWERS:

//(a) 
//if (ival1 != ival2)
    //ival1 = ival2;
//else
    //ival1 = ival2 = 0;

//(b) 
//if (ival < minval){
    //minval = ival;
    //occurs = 1;
//}

//(c) 
//int ival = get_value();
//if (ival)
    //cout << "ival = " << ival << endl;
//else
    //cout << "ival = 0\n";
//(d) 
//if (ival == 0)
    //ival = get_value();
