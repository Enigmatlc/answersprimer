//Exercise 9.34: Assuming vi is a container of ints that includes even and
//odd values, predict the behavior of the following loop.After you’ve analyzed
//this loop, write a program to test whether your expectations were correct.
//Click here to view code image
//iter = vi.begin();
//while (iter != vi.end())
//if (*iter % 2)
//iter = vi.insert(iter, *iter);
//++iter;

//if it enters the if statement it will stay there since its not updating iter to move it forward.

#include <vector>

int main() {
 
    std::vector<int> vi{2};

    // If the container contains any odd values, the loop will continue
    // infinitely.
    auto iter = vi.begin();
    while (iter != vi.end()) { // The loop body should be a block.
        if (*iter % 2)
            iter = vi.insert(iter, *iter);
            ++iter;
    }

    return 0;
}