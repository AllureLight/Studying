#include <string>
#include <algorithm>

//For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".

std::string disemvowel(const std::string& str) {
    std::string aux = str;
    aux.erase(std::remove_if(aux.begin(), aux.end(), [](char c){
        return std::string("aeiouAEIOU").find(c) != std::string::npos;
    }), aux.end());
    return aux;
}