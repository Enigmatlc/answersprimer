#include<string>
class StringBound{
    public:
    StringBound(size_t lower,size_t upper):lower_bound(lower),upper_bound(upper){}
    bool operator()(const std::string& str){
        return str.size()<=upper_bound && str.size()>=lower_bound;
    }
    bool operator()(const std::string& str,size_t num){
        return str.size()>=num;
    }
    size_t lower_bound;
    size_t upper_bound;


};