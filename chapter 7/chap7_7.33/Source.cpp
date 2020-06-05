//Exercise 7.33: What would happen if we gave Screen a size member
//defined as follows ? Fix any problems you identify.
//Click here to view code image
//pos Screen::size() const
//{
//	return height * width;
//}

//pos Screen::size() const
//{
//	return height * width;
//}
//
//the word size is a reserved word in c++ so we need to change it scr_size()
//we have to specify where the pos member is being pulled from since return type runs first Screen::pos
//we also have to include a declaration inside Screen.pos scr_size() const;