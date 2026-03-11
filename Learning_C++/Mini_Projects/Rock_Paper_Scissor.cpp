#include <iostream>

char getComputerChoice();
void Winner(char playerChoice, char computerChoice);

int main(){
    char playerChoice, computerChoice;

    do{
        std::cout << "Enter your choice (R, P, S): ";
        std::cin >> playerChoice;
    }while(playerChoice != 'R' && playerChoice != 'P' && playerChoice != 'S');

    computerChoice = getComputerChoice();
    std::cout << "Computer chose: " << computerChoice << std::endl;
    Winner(playerChoice, computerChoice);
    return 0;
}

char getComputerChoice(){
    srand(time(NULL));
    int randomNum = rand() % 3;
    switch(randomNum){
        case 0:
            return 'R';
        case 1:
            return 'P';
        case 2:
            return 'S';
    }
    return 'a'; // This line will never be reached, but it's here to avoid compiler warnings.
}

void Winner(char playerChoice, char computerChoice){
    if(playerChoice == computerChoice){
        std::cout << "It's a tie!" << std::endl;
    }else if((playerChoice == 'R' && computerChoice == 'S') || 
             (playerChoice == 'P' && computerChoice == 'R') || 
             (playerChoice == 'S' && computerChoice == 'P')){
        std::cout << "You win!" << std::endl;
    }else{
        std::cout << "Computer wins!" << std::endl;
    }
}