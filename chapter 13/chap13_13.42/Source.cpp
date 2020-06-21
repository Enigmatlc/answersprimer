//Exercise 13.42: Test your StrVec class by using it in place of the
//vector<string> in your TextQueryand QueryResult classes(§ 12.3,
//	p. 484).
#include"TextQuery.h"
#include <iostream>

void runQueries(std::ifstream& infile)
{
    TextQuery tq(infile);
    while (true) {
        std::cout << "enter word to look for, or q to quit: ";
        string s;
        if (!(std::cin >> s) || s == "q") break;
            print(std::cout, tq.query(s)) << std::endl;
    }
}

int main()
{
    std::ifstream file("../data/storyDataFile.txt");
    runQueries(file);
}