//Exercise 7.48: Assuming the Sales_data constructors are not explicit,
//what operations happen during the following definitions
//
//string null_isbn("9-999-99999-9");
//Sales_data item1(null_isbn); the one string constructor is called
//Sales_data item2("9-999-99999-9"); the one string constructor is called.
//What happens if the Sales_data constructors are explicit ?
//nothing changes since were not using implicit conversion.