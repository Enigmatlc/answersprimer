// Exercise 16.12: Write your own version of the Blob and BlobPtr
// templates. including the various const members that were not shown in the
// text.
#include<initializer_list>
#include<vector>
#include<string>
#include<memory>
#include <stdexcept>
// forward declarations needed for friend declarations in Blob
template <typename> class BlobPtr;
template <typename> class Blob; // needed for parameters in operator==
template <typename T> bool operator==(const Blob<T>&, const Blob<T>&);
template <typename T> bool operator!=(const Blob<T>&, const Blob<T>&);
template <typename T> bool operator<(const Blob<T>&, const Blob<T>&);
template <typename T> bool operator>(const Blob<T>&, const Blob<T>&);
template <typename T> bool operator<=(const Blob<T>&, const Blob<T>&);
template <typename T> bool operator>=(const Blob<T>&, const Blob<T>&);

template<typename T> class Blob
{
public:
    friend class BlobPtr;
    friend bool operator==<T>(const Blob<T>&, const Blob<T>&);
    friend bool operator!=<T>(const Blob<T>&, const Blob<T>&);
    friend bool operator< <T>(const Blob<T>&, const Blob<T>&);
    friend bool operator> <T>(const Blob<T>&, const Blob<T>&);
    friend bool operator<=<T>(const Blob<T>&, const Blob<T>&);
    friend bool operator>=<T>(const Blob<T>&, const Blob<T>&);

    typedef T value_type;
    typedef typename std::vector<T>::size_type size_type;

    StrBlobPtr<T> begin();//implement

    StrBlobPtr<T> end();//implement

    //constructors
    Blob();
    Blob(std::initializer_list<T> il);
    size_type size() const {return data->size();}
    bool empty() const { return data->empty();}
    //add remove elements
    void push_back(const T & t){return data->empty(t);}
    //move version;see 13.6.3 (p548)

    void push_back(T&& t){data->push_back(std::move(t));}
    void pop_back(){
        check(0,"pop_back on empty Blob");
    }
    //element access
    T& front(){
        check(0,"front on empty Blob");
        return data->front();
    }
    T& back(){
        check(0,"back on empty Blob");
        return data->back();
    }

    //const versions
    const T& back() const{
        check(0,"back on emtpy Blob");
        return data->back();
    }
    const T& front() const{
        check(0,"front on empty Blob");
        return data->front();
    }
    T& operator[](size_t n);
    const T& operator[](size_t n) const;
private:
    std::shared_ptr<std::vector<T>> data;
    void check(size_type i,const std::string& msg) const;
};
template <typename T> bool operator==(const Blob<T>& lhs, const Blob<T>& rhs)
{
    return *lhs.data == *rhs.data;
}

template <typename T> bool operator!=(const Blob<T>& lhs, const Blob<T>& rhs)
{
    return !(lhs == rhs);
}

template <typename T> bool operator<(const Blob<T>& lhs, const Blob<T>& rhs)
{
    return std::lexicographical_compare(lhs.data->begin(), lhs.data->end(),
                                        rhs.data->begin(), rhs.data->end());
}

template <typename T> bool operator>(const Blob<T>& lhs, const Blob<T>& rhs)
{
    return rhs < lhs;
}

template <typename T> bool operator<=(const Blob<T>& lhs, const Blob<T>& rhs)
{
    return !(rhs < lhs);
}

template <typename T> bool operator>=(const Blob<T>& lhs, const Blob<T>& rhs)
{
    return !(lhs < rhs);
}
//member functions
template<typename T> void Blob<T>::check(size_type i, const std::string& msg) const{
    if(i>=data->size())
        throw std::out_of_range(msg);
}
template <typename T> inline T& Blob<T>::operator[](size_t n)
{
    check(n, "out of range");
    return data->at(n);
}

template <typename T> inline const T& Blob<T>::operator[](size_t n) const
{
    check(n, "out of range");
    return data->at(n);
}
template<typename T> Blob<T>::Blob(): data(std::make_shared<std::vector<T>>()){}
template<typename T> Blob<T>::Blob(std::initializer_list<T>il):data(std::make_shared<std::vector<T>>(il)){}

// *                                                                                   *
// *                                                                                   *          
// *                                                                                   *   
// *                                BlobPtr Class                                      *        
// *                                                                                   *
template <typename T> bool operator==(const BlobPtr<T>&, const BlobPtr<T>&);
template <typename T> bool operator!=(const BlobPtr<T>&, const BlobPtr<T>&);
template <typename T> bool operator<(const BlobPtr<T>&, const BlobPtr<T>&);
template <typename T> bool operator>(const BlobPtr<T>&, const BlobPtr<T>&);
template <typename T> bool operator<=(const BlobPtr<T>&, const BlobPtr<T>&);
template <typename T> bool operator>=(const BlobPtr<T>&, const BlobPtr<T>&);
// BlobPtr throws an exception on attempts to access a nonexistent element
template <typename T> class BlobPtr{
    friend bool operator==<T>(const BlobPtr<T>&, const BlobPtr<T>&);
    friend bool operator!=<T>(const BlobPtr<T>&, const BlobPtr<T>&);
    friend bool operator< <T>(const BlobPtr<T>&, const BlobPtr<T>&);
    friend bool operator> <T>(const BlobPtr<T>&, const BlobPtr<T>&);
    friend bool operator<=<T>(const BlobPtr<T>&, const BlobPtr<T>&);
    friend bool operator>=<T>(const BlobPtr<T>&, const BlobPtr<T>&);
public:
    BlobPtr(): curr(0) { }
    BlobPtr(Blob<T> &a, size_t sz = 0):wptr(a.data), curr(sz) { }
    T& deref() const;
    //pre fix
    BlobPtr& operator++();
    BlobPtr& operator--();
    //post fix
    BlobPtr operator++(int);
    BlobPtr operator--(int);
    BlobPtr& operator+=(size_t);
    BlobPtr& operator-=(size_t);
    BlobPtr operator+(size_t) const;
    BlobPtr operator-(size_t) const;

    T& operator[](size_t n);
    const T& operator[](size_t n) const;
private:
    // check returns a shared_ptr to the vector if the check succeeds
    std::shared_ptr<std::vector<T>> check(std::size_t, const std::string&) const;
    // store a weak_ptr, which means the underlying vector might be destroyed
    std::weak_ptr<std::vector<T>> wptr;
    std::size_t curr; // current position within the array
};
template <typename T>
bool operator==(const BlobPtr<T>& lhs, const BlobPtr<T>& rhs)
{
    return lhs.curr == rhs.curr;
}

template <typename T>
bool operator!=(const BlobPtr<T>& lhs, const BlobPtr<T>& rhs)
{
    return !(lhs == rhs);
}

template <typename T> bool operator<(const BlobPtr<T>& x, const BlobPtr<T>& y)
{
    return x.curr < y.curr;
}

template <typename T> bool operator>(const BlobPtr<T>& x, const BlobPtr<T>& y)
{
    return x.curr > y.curr;
}

template <typename T> bool operator<=(const BlobPtr<T>& x, const BlobPtr<T>& y)
{
    return x.curr <= y.curr;
}

template <typename T> bool operator>=(const BlobPtr<T>& x, const BlobPtr<T>& y)
{
    return x.curr >= y.curr;
}
//members
template <typename T> inline T& BlobPtr<T>::deref() const
{
    auto p = check(curr, "dereference past end");
    return (*p)[curr];
}

template <typename T> inline BlobPtr<T>& BlobPtr<T>::operator++()
{
    check(curr, "increment past end of Blob<T>Ptr");
    ++curr;
    return *this;
}

template <typename T> inline BlobPtr<T>& BlobPtr<T>::operator--()
{
    --curr;
    check(-1, "decrement past begin of Blob<T>Ptr");
    return *this;
}

template <typename T> inline BlobPtr<T> BlobPtr<T>::operator++(int)
{
    BlobPtr<T> ret = *this;
    ++*this;
    return ret;
}

template <typename T> inline BlobPtr<T> BlobPtr<T>::operator--(int)
{
    BlobPtr<T> ret = *this;
    --*this;
    return ret;
}

template <typename T> inline BlobPtr<T>& BlobPtr<T>::operator+=(size_t n)
{
    curr += n;
    check(curr, "increment past end of Blob<T>Ptr");
    return *this;
}

template <typename T> inline BlobPtr<T>& BlobPtr<T>::operator-=(size_t n)
{
    curr -= n;
    check(curr, "increment past end of Blob<T>Ptr");
    return *this;
}

template <typename T> inline BlobPtr<T> BlobPtr<T>::operator+(size_t n) const
{
    BlobPtr<T> ret = *this;
    ret += n;
    return ret;
}

template <typename T> inline BlobPtr<T> BlobPtr<T>::operator-(size_t n) const
{
    BlobPtr<T> ret = *this;
    ret -= n;
    return ret;
}
template <typename T> inline T& BlobPtr<T>::operator[](size_t n)
{
    auto p = check(n, "dereference out of range.");
    return (*p)[n];
}

template <typename T> inline const T& BlobPtr<T>::operator[](size_t n) const
{
    auto p = check(n, "dereference out of range.");
    return (*p)[n];
}