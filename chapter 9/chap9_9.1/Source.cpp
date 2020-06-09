//Exercise 9.1: Which is the most appropriate—a vector, a deque, or a
//list—for the following program tasks ? Explain the rationale for your choice.
//If there is no reason to prefer one or another container, explain why not.

//(a)Read a fixed number of words, inserting them in the container
//alphabetically as they are entered.We’ll see in the next chapter that
//associative containers are better suited to this problem.

//foward_list is the best container for this problem since it provides fast insert/delete at any point in the list.


//(b) Read an unknown number of words.Always insert new words at the
//back.Remove the next value from the front.

//deque is the most suitable container for this program since it has fast insert in the back and fast deletion in the front.

//(c)Read an unknown number of integers from a file.Sort the numbers and
//then print them to standard output.

//vector is the the best container for this program since its good at inserting and random access.