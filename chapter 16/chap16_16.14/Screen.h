

#include<string>
#include<iostream>
template<std::string::size_type, std::string::size_type>
class Screen;

template<std::string::size_type w, std::string::size_type h>
std::ostream& operator<< (std::ostream&,Screen<w, h>&);


template<std::string::size_type w,std::string::size_type h> 
class Screen{

    friend std::ostream& operator<<<>(std::ostream&, Screen<w,h>&);
public:
    Screen()=default;
    Screen(const char str=' '):content(w*h,str){}

    Screen& set(char);
    Screen& set(std::string::size_type,std::string::size_type,char);
    char get() const {return content[cursor];}
    inline char get(std::string::size_type,std::string::size_type)const;

    Screen& move(std::string::size_type,std::string::size_type);
    Screen& display(std::ostream& os) { os<<content;  return *this; }



private:
    //void do_display(std::ostream& os) const { os << content; }
    std::string::size_type cursor=0;
    std::string content;
};
//MEMBER FUNCTIONS
template<std::string::size_type w,std::string::size_type h>
inline Screen<w,h>& Screen<w,h>::set(char c){
    content[cursor] =c;
    return *this;
}

template<std::string::size_type w,std::string::size_type h>
inline Screen<w,h>& Screen<w,h>::set(std::string::size_type r,std::string::size_type col,char ch){
    content[r*w+col]=ch;
    return *this;
}

template<std::string::size_type w,std::string::size_type h>
 inline Screen<w,h>& Screen<w,h>::move(std::string::size_type r,std::string::size_type c){
    cursor = r + w + c;
    return *this;
}

template<std::string::size_type w,std::string::size_type h>
inline char Screen<w,h>::get(std::string::size_type r,std::string::size_type c)const{
    return content[r*w+c];
}

//OS OPERATORS
//template<std::string::size_type w, std::string::size_type h>
//std::istream& operator>>(std::istream& is, Screen<w,h>& item) {
//    is >> w >> h;
//    return is;
//}
//
template<std::string::size_type w, std::string::size_type h>
std::ostream& operator<<(std::ostream& os, Screen<w, h>& item) {
    os << item.content;
    return os;
}