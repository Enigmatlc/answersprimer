<!-- Exercise 14.47: Explain the difference between these two conversion
operators:
struct Integral {
operator const int();
operator int() const;
}; -->
one returns a const object the other one doesn't allow the function to change the objects being used inside the scope