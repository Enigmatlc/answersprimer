//Exercise 12.5: We did not make the constructor that takes an
//initializer_list explicit (§ 7.5.4, p. 296).Discuss the pros and
//cons of this design choice.
//pros:
//it allows us to implitely pass types that arent string 
//cons:
//it will not allow the users to provide types that arent strings
//the strings being passed by not be what we expect