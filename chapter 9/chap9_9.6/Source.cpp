//Exercise 9.6: What is wrong with the following program ? How might you
//correct it ?
//
//list<int> lst1;
//list<int>::iterator iter1 = lst1.begin(),
//iter2 = lst1.end();
//while (iter1 < iter2) /* ... */



//change iter2 = lst1.end(); to list<int>::iterator iter2 = lst1.end();

