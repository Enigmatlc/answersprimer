#pragma once
#include "Query_base.h"
#include "QueryResult.h"
#include "TextQuery.h"
#include<memory>
#include<string>
#include<iostream>
class Query
{
    friend Query operator~(const Query&);
    friend Query operator|(const Query&, const Query&);
    friend Query operator&(const Query&, const Query&);
public:
    // build a new WordQuery
    Query(const std::string& );

    // interface functions: call the corresponding Query_base operators
    // QueryResult eval(const TextQuery& t) const
    // { return q->eval(t); }
    std::string rep() const{  
        std::cout<<"Query::rep()"<<std::endl;
        return q->rep();
        }

private:
    // constructor only for friends
    Query(std::shared_ptr<Query_base> query) :
        q(query)
    {
        std::cout << "Query::Query(std::shared_ptr<Query_base> query)\n";
    }
    std::shared_ptr<Query_base> q;
};

inline std::ostream&
operator << (std::ostream& os, const Query& query)
{
    // make a virtual call through its Query_base pointer to rep();
    return os << query.rep();
}
