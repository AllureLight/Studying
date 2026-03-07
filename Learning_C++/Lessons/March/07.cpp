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
    std::string frase;
    std::cout << "Digite uma frase: ";
    std::getline(std::cin, frase);
    std::cout << highestScoringWord(frase) << std::endl;
    return 0;
}

std::string highestScoringWord(const std::string &str){
    int highestScore = 0;
    std::string highestScoringWord = "";

    int score = 0;
    std::string word = "";
    for(char c : str){
        if(c != ' '){
            score += (int)c - 96;
            word.push_back(c);
        }
        else{
            if(score > highestScore){
                highestScore = score;
                highestScoringWord = word;
            }
            score = 0;
            word = "";
        }
    }
    if(score > highestScore){
                highestScore = score;
                highestScoringWord = word;
    }
    return highestScoringWord;
}