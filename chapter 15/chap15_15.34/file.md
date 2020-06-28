Exercise 15.34: For the expression built in Figure 15.3 (p. 638):
(a) List the constructors executed in processing that expression.
    Query(string)
    OrQuery(Query,Query)
    AndQuery(Query,Query)
    WordQuery(string)
    WordQuery(string)
    WordQuery(string)
    BinaryQuery(Query, Query, string);
(b) List the calls to rep that are made from cout << q.
    query.rep()
    q->rep()
    OrQuery::rep()
    Query::rep()
    BinaryQuer::rep()
(c) List the calls to eval made from q.eval().
q.eval()
q->rep()
QueryResult eval(TextQuery& )