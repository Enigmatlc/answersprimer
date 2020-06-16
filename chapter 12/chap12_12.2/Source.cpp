//Exercise 12.2: Write your own version of the StrBlob class including the
//const versions of front and back.
#include"StrBlob.h"
#include<memory>
#include<initializer_list>
#include<stdexcept>
#include<vector>
using std::make_shared;
using std::out_of_range;	using std::string;
using std::initializer_list; using std::vector;

StrBlob::StrBlob() : data(make_shared<vector<string>>()) { }
StrBlob::StrBlob(initializer_list<string> il) :
	data(make_shared<vector<string>>(il)) { }

void StrBlob::check(size_type i, const string& msg) const
{
	if (i >= data->size())
		throw std::out_of_range(msg);
}
string& StrBlob::front()
{
	// if the vector is empty, check will throw
	check(0, "front on empty StrBlob");
	return data->front();
}
string& StrBlob::front()const {//constant version of StrBlob::front.
	// if the vector is empty, check will throw
	check(0, "front on empty StrBlob");
	return data->front();
}
string& StrBlob::back()
{
	check(0, "back on empty StrBlob");
	return data->back();
}
string& StrBlob::back()const {//constant version of StrBlob::back.
	check(0, "back on empty StrBlob");
	return data->back();
}
void StrBlob::pop_back()
{
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}
int main() {

}