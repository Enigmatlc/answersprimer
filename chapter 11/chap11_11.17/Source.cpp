//Exercise 11.17: Assuming c is a multiset of strings and v is a vector
//of strings, explain the following calls.Indicate whether each call is legal :
//
//copy(v.begin(), v.end(), inserter(c, c.end())); legal items will be copied from v to c
//copy(v.begin(), v.end(), back_inserter(c)); illegal push_back is not available for associative containers
//copy(c.begin(), c.end(), inserter(v, v.end())); legal
//copy(c.begin(), c.end(), back_inserter(v)); legal