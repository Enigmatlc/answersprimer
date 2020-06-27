Exercise 15.31: Given that s1, s2, s3, and s4 are all strings, determine
what objects are created in the following expressions:

(a) Query(s1) | Query(s2) & ~ Query(s3); wordquere then notquery is created next.next a andquery is created next then a word query is created last
(b) Query(s1) | (Query(s2) & ~ Query(s3)); same as above
(c) (Query(s1) & (Query(s2)) | (Query(s3) & Query(s4))); wordquery is created first.andquery is created next.andquery is created again then a orquery is created next.