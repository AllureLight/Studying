#include <iostream>
#include <ctime>

int main(){
    int number_of_dice;
    int sides_of_dice;
    srand(time(NULL));

    std::cout << "Enter the number of dice: ";
    std::cin >> number_of_dice;
    std::cout << "Enter the number of sides on the dice: ";
    std::cin >> sides_of_dice;

    for(int i = 0; i < number_of_dice; i++){
        std::cout << "Dice " << i + 1 << ": " << rand() % sides_of_dice + 1 << std::endl;
    }
    
}