//Exercise 10.38: List the five iterator categories and the operations that each
//supports
//Input iterators : can read elements in a sequence.
//
//Output iterators : can be thought of as having complementary functionality to input
//iterators; they write rather than read elements.
//
//Forward iterators : can readand write a given sequence.They move in only one
//direction through the sequence.Forward iterators support all the operations of both
//input iteratorsand output iterators.Moreover, they can read or write the same
//element multiple times.Therefore, we can use the saved state of a forward iterator.
//Hence, algorithms that use forward iterators may make multiple passes through the
//sequence.The replace algorithm requires a forward iterator; iterators on
//forward_list are forward iterators.
//
//Bidirectional iterators : can readand write a sequence forward or backward.In
//addition to supporting all the operations of a forward iterator, a bidirectional iterator
//also supports the prefixand postfix decrement(--) operators.The reverse
//algorithm requires bidirectional iterators, and aside from forward_list, the library
//containers supply iterators that meet the requirements for a bidirectional iterator.
//
//Random - access iterators : provide constant - time access to any position in the
//sequence.These iterators support all the functionality of bidirectional iterators.