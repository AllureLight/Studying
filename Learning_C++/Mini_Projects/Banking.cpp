#include <iostream>

double deposit();
double withdraw(double balance);
void checkBalance(double balance);

int main() {
    int choice;
    double balance = 0.0;

    do{
        std::cout << "1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        std::cin.clear(); //clear the error flag on cin
        fflush(stdin); //flush the input buffer to prevent any unwanted input from affecting the program

        switch(choice){
            case 1: balance += deposit(); ;
                break;
            case 2: balance -= withdraw(balance);
                break;
            case 3: checkBalance(balance);
                break;
            case 4:
                std::cout << "Exit selected\n";
                break;
            default:
                std::cout << "Invalid choice, please try again\n";
        }
        std::cout << "\n";
    }while(choice != 4);
}

double deposit(){
    double amount;
    std::cout << "Enter amount to deposit: ";
    std::cin >> amount;
    return amount;
}

double withdraw(double balance){
    double amount;
    do{
        std::cout << "Enter amount to withdraw: ";
        std::cin >> amount;
        if(amount <= 0){
            std::cout << "Amount must be greater than 0, please try again\n";
        }else{
            std::cout << "Insufficient balance, please try again\n";
        }
    }while(amount <= 0 || amount > balance);
    return amount;
}

void checkBalance(double balance){
    std::cout << "Current balance: " << balance << "\n";
}