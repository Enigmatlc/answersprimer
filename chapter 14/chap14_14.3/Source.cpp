//Exercise 14.3: Both string and vector define an overloaded == that can
//be used to compare objects of those types.Assuming svec1 and svec2 are
//vectors that hold strings, identify which version of == is applied in each
//of the following expressions :
//
//(a)"cobble" == "stone" build in operator==
//(b)svec1[0] == svec2[0] string,string string operator
//(c) svec1 == svec2	vector,vector vector operator

//(d) "svec1[0] == "stone" string,char* string operator