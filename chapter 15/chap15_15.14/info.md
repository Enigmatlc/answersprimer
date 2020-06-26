Exercise 15.14: Given the classes from the previous exercise and the
following objects, determine which function is called at run time:


base bobj; 
base *bp1 = &bobj; 
base &br1 = bobj;

derived dobj; 

base *bp2 = &dobj; 

base &br2 = dobj;

(a) bobj.print(); calls the version in the base class

(b) dobj.print(); calls version in the derived class

(c) bp1->name(); calls version in the base class

(d) bp2->name(); calls version in the base class

(e) br1.print(); calls version in the base class

(f) br2.print(); calls version in the derived class
