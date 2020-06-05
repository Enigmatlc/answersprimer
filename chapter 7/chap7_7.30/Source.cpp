//Exercise 7.30: It is legal but redundant to refer to members through the
//this pointer.Discuss the pros and cons of explicitly using the this pointer
//to access members.

//pros
//its makes it really easy to chain member calls in classes.
//makes it easy to work on two objects at the same time without having to create an extra function parameter.


//cons
//can get tricky it not used correctly for example if you forget to return a reference from a function and end up working on a copy of the objective.
//can be hard to understand for beginners 