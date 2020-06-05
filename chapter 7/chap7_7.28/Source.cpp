//Exercise 7.28: What would happen in the previous exercise if the return
//type of move, set, and display was Screen rather than Screen& ?

the program program would have to create a temp object and the changes that were meant for the object returned by *this would only apply to the temp object and the second display would not have any changes made since the them copy was the one being changed.

Screen myScreen(5, 5, 'X');
myScreen.move(4, 0)
temp.set('#') //never applies to the object myScreen.
temp.display(cout);
cout << "\n";
myScreen.display(cout);
cout << "\n";