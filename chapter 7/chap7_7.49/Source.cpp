//Exercise 7.49: For each of the three following declarations of combine,
//explain what happens if we call i.combine(s), where i is a Sales_data
//and s is a string :
//(a)Sales_data& combine(Sales_data); a temp sale data object is created to hold s
//(b)Sales_data& combine(Sales_data&); error a reference cannot point to a temp.
//(c)Sales_data& combine(const Sales_data&) const; error cannot be const or a reference since a temp will be created.