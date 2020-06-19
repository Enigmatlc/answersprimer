//Exercise 13.12: How many destructor calls occur in the following code
//fragment ?

bool fcn(const Sales_data * trans, Sales_data accum)
{
	Sales_data item1(*trans), item2(accum);
	return item1.isbn() != item2.isbn();
}//members of accum are destroyed so a one call is made to the Sales_data accum and trans is not deleted because its a pointer. and both items being returned will also be destroyed so 3 in total.