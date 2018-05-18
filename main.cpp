#include <iostream>
#include <string>
#include <regex>

bool validBrackets(std::string bracketsStr,int previousLength){ 
    if (bracketsStr.length()%2==1) {
        return false;
    }
    std::regex parentheses("\\(\\)");
    std::regex squareBrackets("\\[\\]");
    std::regex braces("\\{\\}");
    bracketsStr = std::regex_replace(bracketsStr,parentheses,"");
    bracketsStr = std::regex_replace(bracketsStr,squareBrackets,"");
    bracketsStr = std::regex_replace(bracketsStr,braces,"");
    if(bracketsStr.length()==0) {
        return true;
    }
    if(bracketsStr.length()==previousLength){
        return false;
    }
    return validBrackets(bracketsStr,bracketsStr.length());
}

int main(int argc, char const *argv[]){
    std::string bracketsStr = argv[1];
    std::cout << bracketsStr << " is ";
    if (validBrackets(bracketsStr,bracketsStr.length())) {
        std::cout << "valid. :)" << std::endl;
    }else{
        std::cout << "invalid. :(" << std::endl;
    }
    return 0;
}