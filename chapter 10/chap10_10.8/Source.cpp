//Exercise 10.8: We said that algorithms do not change the size of the
//containers over which they operate.Why doesn’t the use of back_inserter
//invalidate this claim ?
//because insert doesn't directly write to the container it returns a iterator that can be used to add items to the container by using the push_back member.