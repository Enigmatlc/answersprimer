//Exercise 9.33: In the final example in this section what would happen if we
//did not assign the result of insert to begin ? Write a program that omits
//this assignment to see if your expectation was correct.

//iterator begin will become invalid after insert.

#include <vector>
using std::vector;

int main() {
    vector<int> vi{ 1, 2,};

    auto begin = vi.begin();
    while (begin != vi.end()) {
        ++begin;
        vi.insert(begin, 42);
 
        ++begin;
    }

    return 0;
}