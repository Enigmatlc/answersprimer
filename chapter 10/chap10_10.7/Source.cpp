//Exercise 10.7: Determine if there are any errors in the following programs
//and, if so, correct the error(s) :
//	(a)
//	vector<int> vec; list<int> lst; int i;
//while (cin >> i)
//lst.push_back(i);
//copy(lst.cbegin(), lst.cend(), vec.begin());

//the vector was never initialize therefore it will be wrong to copy items into an empty vector.



//(b)
//vector<int> vec;
//vec.reserve(10); // reserve is covered in § 9.4 (p. 356)
//fill_n(vec.begin(), 10, 0);
//reserving space doesn't mean the vector is initialize therefore will it also be an error to write to the vector.

