//Exercise 9.31: The program on page 354 to remove even - valued elements
//and duplicate odd ones will not work on a list or forward_list.Why ?
//Revise the program so that it works on these types as well.
//
//forward_list and list do not support insert
//
//forward_list does not support erase.
//
//forward_list and list do not support compound assignments. +=,-=,/= *=


#include<list>
#include<forward_list>
#include<vector>
#include<iostream>
using std::vector;	using std::cout;
using std::list;	using std::forward_list;
using std::endl;



int main() {
	// silly loop to remove even-valued elements and insert a duplicate of odd-valued elements
	cout << "vector: " << endl;
	vector<int> vi = { 0,1,2,3,4,5,6,7,8,9 };
	auto iter = vi.begin(); // call begin, not cbegin because we're changing vi
	while (iter != vi.end()) {
		if (*iter % 2) {
				iter = vi.insert(iter, *iter); // duplicate the current element
/*					iter++; change iter +=2 to this to be able to use this same version with a list container
					iter++;*/
				iter += 2;// advance past this element and the one inserted before it
			}
		else
				iter = vi.erase(iter); // remove even elements
				// don't advance the iterator; iter denotes the element after the one we erased
	}
	for (auto c : vi)
		cout << c << " ";

	cout << endl;
	//th
	cout << "forward_list: " << endl;
	forward_list<int> fli{ 0,1,2,3,4,5,6,7,8,9 };
	auto before = fli.before_begin();
	auto after = fli.begin();
	
	while (after != fli.end())
	{
		if (*after % 2) {
			before=fli.insert_after(before,*after);
			++before;
			++after;
		}
		else {
			after=fli.erase_after(before);
		}

	}
	for (auto c : fli)
		cout << c << " ";
}