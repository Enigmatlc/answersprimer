//#pragma once
//Exercise 7.39: Would it be legal for both the constructor that takes a
//stringand the one that takes an istream& to have default arguments ? If
//not, why not?
//
//It would be illegal since two constructors will be writting to the object at the same time.