#pragma once
#include"TextQuery.h"
class Query_base
{
friend class Query;
protected:
    using line_no= TextQuery::line_no;
    virtual ~Query_base()=default;
private:
    //virtual Query_base eval(const TextQuery&) const =0;
    virtual std::string rep() const =0;
};
