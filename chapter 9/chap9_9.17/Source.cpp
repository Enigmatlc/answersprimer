//Exercise 9.17: Assuming c1 and c2 are containers, what(if any)
//constraints does the following usage place on the types of c1 and c2 ?
//if (c1 < c2)

//they must be of the same type and hold the same data type. Lets assume c1 is bigger than c2 then the last item of c2 will be compared to the item on c1 that has the same position therefore they need to have the same data type for the comparison to happen.

//1) If the containers have different sizes but every element of the smaller one is
//equal to the corresponding element of the larger one, then the smaller one is
//less than the other.
//
//2) If neither container is an initial subsequence of the other, then the comparison
//depends on comparing the first unequal elements.