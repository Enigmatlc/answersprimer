//Exercise 9.32: In the program on page 354 would it be legal to write the call
//to insert as follows ? If not, why not?

//iter = vi.insert(iter, *iter++);

//// silly loop to remove even-valued elements and insert a duplicate of odd-valued
//elements
//vector<int> vi = { 0,1,2,3,4,5,6,7,8,9 };
//auto iter = vi.begin(); // call begin, not cbegin because we're changing
//vi
//while (iter != vi.end()) {
//	if (*iter % 2) {
//		iter = vi.insert(iter, *iter); // duplicate the current
//		element
//			iter += 2; // advance past this element and the one inserted before it
//	}
//	else
//		iter = vi.erase(iter); // remove even elements
//		// don't advance the iterator; iter denotes the element after the one we
//	erased
//}

//its not legal since the order of evaluation is not defined.