//Exercise 6.37: Write three additional declarations for the function in the
//previous exercise.One should use a type alias, one should use a trailing
//return, and the third should use decltype.Which form do you preferand
//why ?

#include <string>
using std::string;


//type alias
using strarr=string[10];

strarr* fnct(string str);
//trailing return
auto fnct(int i) ->string(*)[10];
//decltype
string arrstr[] = {"i","b","c"};
decltype(arrstr)* fnct(int i, string str);