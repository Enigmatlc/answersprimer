//Exercise 9.22: Assuming iv is a vector of ints, what is wrong with the
//following program ? How might you correct the problem(s) ?

//vector<int>::iterator iter = iv.begin(),

//mid = iv.begin() + iv.size() / 2;

//while (iter != mid)

//if (*iter == some_val){

//iv.insert(iter, 2 * some_val);




//change the last line to iv.push_front(2 * some_val);

//or 

//we can go in another direction by updating the iterator thats being used by insert since iterators become invalid after insert.