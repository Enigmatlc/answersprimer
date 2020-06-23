//Exercise 13.36: Design and implement the corresponding Folder class.
//That class should hold a set that points to the Messages in that Folder.
#pragma once
#include<string>
#include<set>


class Folder;
class Message
{
	friend void swap(Message& , Message& );
	friend class Folder;
public:
	//constructor
	explicit Message(const std::string& str = "") :contents(str) {}
	//copy constructor
	Message(const Message&);
	//assignment operator
	Message& operator=(const Message& rhs);
	//destructor
	~Message();
	//save, remove this message from  the specified folder's set of messages
	void save(Folder&);
	void remove(Folder&);

	void addFldr(Folder* f) { folders.insert(f); }
	void remFldr(Folder* f) { folders.erase(f); }


private:
	std::string contents;
	std::set<Folder*>folders;
	void add_to_Folders(const Message&);
	void remove_from_Folders();
};
class Folder
{
public:
	friend class Message;
	//constructor
	Folder():messages(){}
	//copy constructor
	Folder(const Folder& f);
	//assigment operator
	Folder& operator=(const Folder& f) {
		messages.clear();
		messages = f.messages;
		return *this;
	}
	//destructor
	~Folder(){ remove_from_Messages(); }
	//add and remove message objects.
	void addMsg(Message* );
	void remMsg(Message* );
private:
	std::set<Message*> messages;
	void add_to_Messages(const Folder& );
	void remove_from_Messages();
};
