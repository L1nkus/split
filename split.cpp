#include <vector>
#include <string>
#include "main.h"

std::vector<std::string> split(std::string str, char splitter){
    std::vector<std::string> tokens;
    std::string::iterator lst = str.begin();
    for(std::string::iterator i = str.begin();i != str.end(); i++){
        if(*i == splitter){
            tokens.push_back(std::string(lst,i));
            lst = i+1;
    	}
    }
    if(lst != str.begin()) tokens.push_back(std::string(lst,str.end()));
    return tokens;
}
