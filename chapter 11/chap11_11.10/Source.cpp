//Exercise 11.10: Could we define a map from vector<int>::iterator to
//int ? What about from list<int>::iterator to int ? In each case, if
//not, why not?
//both can be declared but list do not define < > operators since it used bi-directional iterators.
#include<vector>
#include<list>
#include<map>
using std::vector;
using std::map;
using std::list;

int main() {
	map<vector<int>::iterator, int> m;
	map<list<int>::iterator, int> n;//can be declared but its not legal.
}