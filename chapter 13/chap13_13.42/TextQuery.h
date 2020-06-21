#pragma once
#include"StrVec.h"
#include <string>
#include <vector>
#include <memory>
#include <iostream>
#include <fstream>
#include <map>
#include <set>
using std::shared_ptr;      using std::vector;      using std::string;

class QueryResult;
class TextQuery {
public:
    using LineNo = size_t;
    TextQuery(std::ifstream&);
    QueryResult query(const string&) const;

private:
    shared_ptr<StrVec> input;
    std::map<string, shared_ptr<std::set<LineNo>>> result;
};

class QueryResult {
public:
    friend std::ostream& print(std::ostream&, const QueryResult&);

public:
    QueryResult(const string& s, shared_ptr<std::set<TextQuery::LineNo>> set,
        shared_ptr<StrVec> v)
        : word(s), nos(set), input(v)
    {
    }

private:
    string word;
    shared_ptr<std::set<TextQuery::LineNo>> nos;
    shared_ptr<StrVec> input;
};

std::ostream& print(std::ostream&, const QueryResult&);
