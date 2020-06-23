//Exercise 13.51: Although unique_ptrs cannot be copied, in § 12.1.5 (p.
//	471) we wrote a clone function that returned a unique_ptr by value.
//	Explain why that function is legal and how it works.since the unique_ptr is going to be destroyed after its returned it has the same properties as a rvalue so we can move that memory into another shared pointer.