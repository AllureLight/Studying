#include <iostream>
#include <string>

//Given a string of words, you need to find the highest scoring word.
//Each letter of a word scores points according to its position in the alphabet: a = 1, b = 2, c = 3 etc.
//For example, the score of abad is 8 (1 + 2 + 1 + 4).
//You need to return the highest scoring word as a string.
//If two words score the same, return the word that appears earliest in the original string.
//All letters will be lowercase and all inputs will be valid.

std::string highestScoringWord(const std::string &str);

int main() {
    char letra;
    std::cout << "Digite uma letra: ";
    std::cin >> letra;
    
    // Mostra o valor numérico da letra
    std::cout << "O valor ASCII de '" << letra << "' e: " << (int)letra << std::endl;
    
    return 0;
}

std::string highestScoringWord(const std::string &str){
  
  return "magic";
}