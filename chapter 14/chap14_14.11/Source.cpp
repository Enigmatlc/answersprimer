//Exercise 14.11: What, if anything, is wrong with the following Sales_data
//input operator ? What would happen if we gave this operator the data in the
//previous exercise ?
//
//istream & operator>>(istream & in, Sales_data & s)
//{
//	double price;
//	in >> s.bookNo >> s.units_sold >> price;
//	s.revenue = s.units_sold * price;
//	return in;
//}
//the data being store in reveneu would be undefined since the code doesn't check if the stream is valid before calculating the revenue.