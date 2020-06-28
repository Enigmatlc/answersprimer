Exercise 15.38: Are the following declarations legal? If not, why not? If so,
explain what the declarations mean.

BinaryQuery a = Query("fiery") & Query("bird"); illegal binaryquery is abstract
AndQuery b = Query("fiery") & Query("bird"); illegal cant convert query to andquery
OrQuery c = Query("fiery") & Query("bird"); illegal cant convert to orquery