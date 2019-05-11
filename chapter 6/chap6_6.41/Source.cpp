//Exercise 6.41: Which, if any, of the following calls are illegal ? Why ? Which,
//if any, are legal but unlikely to match the programmer’s intent ? Why ?
// 

//char* init(int ht, int wd = 80, char bckgrnd = ' ');

//(a)init();illegal: ht does not have a default argument.

//(b)init(24, 10);legal

//(c)init(14, '*');legal but it does not do what the programmer intents. it provides a char for the wd variable.
