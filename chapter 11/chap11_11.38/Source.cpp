//Exercise 11.38: Rewrite the word - counting(§ 11.1, p. 421) and wordtransformation
//(§ 11.3.6, p. 440) programs to use an unordered_map.
#include <unordered_map>
#include <string>
#include <fstream> 
#include <iostream>
#include <sstream>

using std::string; using std::ifstream;
using std::unordered_map;    using std::cerr;


std::unordered_map<string, string> buildMap(ifstream& map_file)
{
    std::unordered_map<string, string> trans_map;
    for (string key, value; map_file >> key && getline(map_file, value); )
        if (value.size() > 1) trans_map[key] = value.substr(1).substr(0, value.find_last_not_of(' '));
    return trans_map;
}

const string& transform(const string& s, const std::unordered_map<string, string>& m)
{
    auto map_it = m.find(s);
    return map_it == m.cend() ? s : map_it->second;
}

void word_transform(ifstream& map, ifstream& input)
{
    auto trans_map = buildMap(map);
    for (string text; getline(input, text); ) {
        std::istringstream iss(text);
        for (string word; iss >> word; )
            std::cout << transform(word, trans_map) << " ";
        std::cout << std::endl;
    }
}

int main()
{
    ifstream ifs_map("transform.txt"), ifs_content("input.txt");
    if (ifs_map && ifs_content)
        word_transform(ifs_map, ifs_content);
    else
        cerr << "can't find the documents." << std::endl;
}