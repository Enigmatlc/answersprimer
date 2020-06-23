//Exercise 13.53: As a matter of low - level efficiency, the HasPtr assignment
//operator is not ideal.Explain why.Implement a copy - assignment and move assignment
//operator for HasPtr and compare the operations executed in
//your new move - assignment operator versus the copy - and -swap version.


//old version
// HasPtr& HasPtr::operator=(const HasPtr &rhs)
//{
//    auto newp = new std::string(*rhs.ps);
//    delete ps;
//    ps = newp;
//    i = rhs.i;
//    std::cout << "call copy assignment" << std::endl;
//    return *this;
//}

// HasPtr& HasPtr::operator=(HasPtr &&rhs) noexcept
//{
//    if (this != &rhs)
//    {
//        delete ps;
//        ps = rhs.ps;
//        i = rhs.i;
//        rhs.ps = nullptr;
//        std::cout << "call move assignment" << std::endl;
//    }
//    return *this;
//}


//new version
//inline void swap(HasPtr& lhs, HasPtr& rhs)
//{
//    using std::swap;
//    swap(lhs.ps, rhs.ps);
//    swap(lhs.i, rhs.i);
//    std::cout << "call swap" << std::endl;
//}
//HasPtr& HasPtr::operator=(HasPtr rhs)
//{
//    swap(*this, rhs);
//    return *this;
//}