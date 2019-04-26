//Exercise 6.14: Give an example of when a parameter should be a reference
//type.Give an example of when a parameter should not be a reference.

//not needed
void notneeded(int num) {
	for (size_t i = 0; i < num; i++)
	{
		;
	}
}
//needed to keep count of how many times the loop was executed
void needed(int& cnt) {
	for (size_t i = 0; i < cnt; i++)
	{
		cnt++;
	}
}