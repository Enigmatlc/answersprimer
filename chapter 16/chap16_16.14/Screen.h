#include<vector>
#include<string>
#include<iostream>



template<std::string::size_type H,std::string::size_type W> class Screen {
public:
    Screen()=default;
    Screen(H ht,W wd): height(ht),width(wd),contents(ht*wd,' '){}
    Screen(H ht, W wd, char c):height(ht),width(wd),constents(ht*wd,c){}

    Screen& display(std::ostream& os){do_display(os); return *this;}
    const Screen& display(std::ostream& os) const { do_display(os); return *this; } 
    Screen& set(char);
    Screen& set(std::string::size_type,std::string::size_type,char);
    char get() const {return contents[cursor];}
    inline char get(std::string::size_type,std::string::size_type) const;
    Screen& move(std::string::size_type,std::string::size_type);

private:
    void do_display(std::ostream& os) const{os<<contents;}
    T cursor=0;
    H height=0,
    W width=0;
    std::string contents;

};
template<std::string::size_type H,std::string::size_type W> inline Screen<H,W>& Screen<H,W>::set(char c) {
	contents[cursor] = c;
	return *this;
}
template<std::string::size_type H,std::string::size_type W> inline Screen<H,W>& Screen<H,W>::set(std::string::size_type r, std::string::size_type col, char ch) {
	contents[r * width + col] = ch;
	return *this;
}
template<std::string::size_type H,std::string::size_type W> inline Screen<H,W>& Screen<H,W>::move(std::string::size_type r, std::string::size_type c) {
	pos row = r * width;
	cursor = row + c;
	return *this;
}

template<std::string::size_type H,std::string::size_type W> char Screen<H,W>::get(std::string::size_type r, std::string::size_type c) const {
	pos row = r * width;
	return contents[row + c];
}

