//Exercise 13.34: Write the Message class as described in this section.
#pragma once
#include<string>
#include<set>


class Folders;
class Message
{
	friend class Folders;
public:
	//constructor
	explicit Message(const std::string& str=""):contents(str){}
	//copy constructor
	Message(const Message&);
	//assignment operator
	Message& operator=(const Message& rhs);
	//destructor
	~Message();
	//save, remove this message from  the specified folder's set of messages
	void save(Folders&);
	void remove(Folders&);

private:
	std::string contents;
	std::set<Folders*>folders;
	void add_to_Folders(const Message&);
	void remove_from_Folders();
};

