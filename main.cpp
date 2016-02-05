#include <iostream>
#include <string>
#include <vector>
#include "main.h"

int main(){
    std::string str = "Input String"; //String to be split
    //std::cout << str << std::endl;
    //std::cin >> str;
    std::vector<std::string> tokens=split(str, ' '); //Space is a separator here, change however you want
        //WHATEVER CODE
    if (tokens.size()!=0)
        for(auto& i: tokens)
            std::cout << i << std::endl;

}
