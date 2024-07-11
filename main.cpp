#include <iostream>
#include <vector>

#include "boost/algorithm/string/split.hpp"

bool func1(char c)
{
  return c == ' ';
}

int main(){

    std::string line;
    std::getline(std::cin, line);
    std::vector<std::string> strs;
    boost::split(strs,line,func1);
    std::cout << "your string is:" << "\n" << line <<"\n";
    std::cout << "split string is: " << "\n";
    for(auto s : strs){
        std::cout << s << "\n";
    }
    return 0;
}
