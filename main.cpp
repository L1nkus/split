#include <iostream>
#include <string>
#include <vector>
#include "main.h"

int main(){
    std::string str = ""; //String to be split
    std::cout << str << std::endl;
    std::vector<std::string> tokens=split(str, ';'); //';' is the separator here, change however you want
        //WHATEVER CODE
    for(size_t i=0;i<tokens.size();i++)
        std::cout << tokens[i] << std::endl;


}
