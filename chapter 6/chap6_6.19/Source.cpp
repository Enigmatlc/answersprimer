//Exercise 6.19: Given the following declarations, determine which calls are
//legal and which are illegal.For those that are illegal, explain why.
//
//double calc(double);

//int count(const string&, char);

//int sum(vector<int>::iterator, vector<int>::iterator,int);

//vector<int> vec(10);

//(a)calc(23.4, 55.1);illegal: theres only one parameter, but this call provides two arguments.

//(b)count("abcda", 'a');legal

//(c)calc(66);legal but 66 is an int not a double.

//(d)sum(vec.begin(), vec.end(), 3.8);legal but 3.8 will be converted into an int and become 3.
