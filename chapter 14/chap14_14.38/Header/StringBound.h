#include<string>
class StringBound{
    public:
    StringBound(size_t n=0):lower_bound(n){}
    bool operator()(const std::string& str){
        return str.size() == lower_bound;
    }
    size_t lower_bound;
    size_t upper_bound;
};