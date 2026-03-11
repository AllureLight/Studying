#include <iostream>
#include <vector>
#include <algorithm>

std::string select_random_word();
void display_word(const std::string& secret_word, const std::vector<char>& guessed_letters);
void check_character_in_word(const std::string& secret_word, char guess, int& winning_chances);
bool check_word_guessed(const std::string& secret_word, const std::vector<char>& guessed_letters);

int main() {
    srand(time(NULL));
    std::string secret_word = select_random_word();
    std::vector<char> guessed_letters;
    int winning_chances = 6;
    bool word_guessed = false;
    char guess;

    do{
        display_word(secret_word, guessed_letters);

        std::cout << "Enter a letter: ";
        std::cin >> guess;
        guessed_letters.push_back(guess);
        check_character_in_word(secret_word, guess, winning_chances);

        if(word_guessed == check_word_guessed(secret_word, guessed_letters)) {
            std::cout << "Congratulations! You've guessed the word: " << secret_word << std::endl;
            break;
        } else if(winning_chances == 0) {
            std::cout << "Game Over! The word was: " << secret_word << std::endl;
        }
            
    }while(winning_chances > 0);

    return 0;
}

std::string select_random_word() {
    srand(time(NULL));
    std::vector<std::string> words = {"programming", "computer", "developer", "game", "hangman"};
    return words[rand() % words.size()];
}

void display_word(const std::string& secret_word, const std::vector<char>& guessed_letters) {
    for (char letter : secret_word) {
        if (std::find(guessed_letters.begin(), guessed_letters.end(), letter) != guessed_letters.end()) {
            std::cout << letter << " ";
        } else {
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
}

void check_character_in_word(const std::string& secret_word, char guess, int& winning_chances){
    if(secret_word.find(guess) != std::string::npos)
        std::cout << "Correct guess!" << std::endl << std::endl;
    else{
        winning_chances--;
        std::cout << "Wrong guess! You have " << winning_chances << " chances left." << std::endl << std::endl;
    }
}

bool check_word_guessed(const std::string& secret_word, const std::vector<char>& guessed_letters){
    for (char letter : secret_word) {
        for(char guessed_letter : guessed_letters) {
            if(letter == guessed_letter)
                break;
            if(guessed_letter == guessed_letters.back())
                return false;
        }
    }
    return true;
}