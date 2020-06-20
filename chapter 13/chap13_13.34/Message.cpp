#include"Message.h"
//add message to Folders
void Message::save(Folders& f) {
	folders.insert(&f);
	f.addMsg(this);
}
//remove from folder
void Message::remove(Folders& f) {
	folders.erase(&f);
	f.remMsg(this);
}
//add message to message folders that point to m
void Message::add_to_Folders(const Message& m) {
	for (auto f : m.folders)
		f->addMsg(this);
}
//copy constructor
Message::Message(const Message& m) :contents(m.contents), folders(m.folders) { add_to_Folders(m); }	
//remove message from Folders that point to it
void Message::remove_from_Folders() {
	for (auto c : folders)
		f->remMsg(this);
}
//destructor
Message::~Message() {
	remove_from_Folders();
}
Message& Message::operator=(const Message& rhs) {
	remove_from_Folders();
	contents = rhs.contents;
	folders = rhs.folders; 
	add_to_Folders(rhs);
	return *this;
}