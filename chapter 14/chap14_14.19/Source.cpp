//Exercise 14.19: Should the class you chose for exercise 7.40 from § 7.5.1
//(p. 291) define the relational operators ? If so, implement them.If not,
//explain why not. its makes no sence to use rational operators on employees unless we use it order them by name.
bool operator>(const Employee& rhs, const Employee& lhs) {
	return rhs.name > lhs.name;
}
bool operator<(const Employee& rhs, const Employee& lhs) {
	return rhs.name < lhs.name;
}