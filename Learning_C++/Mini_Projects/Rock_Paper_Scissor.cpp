#include <iostream>

char getComputerChoice();

int main(){
    char playerChoice;

    do{
        std::cout << "Enter your choice (R, P, S): ";
        std::cin >> playerChoice;
    }while(playerChoice != 'R' && playerChoice != 'P' && playerChoice != 'S');

    return 0;
}

char getComputerChoice(){
    
}