Exercise 15.10: Recalling the discussion from §8.1 (p. 311), explain how
the program on page 317 that passed an ifstream to the Sales_data
read function works.


std::istream& read(std::istream&, Sales_data&); read declaration

ifstream input(argv[1]); // input is the type ifstream

if (read(input, total)) { // read the first transaction

because of inheritance we can we use ifstream ,istringstream objects as if they are istream objects because istream is the base class for these items.

The types ifstream and istringstream inherit from istream. Thus, we can
use objects of type ifstream or istringstream as if they were istream objects.
We can use objects of these types in the same ways as we have used cin.

