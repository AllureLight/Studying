#include <iostream>

int main() {
    char choice;

    std::cout << "F Fahrenheit" << std::endl;
    std::cout << "C Celsius" << std::endl;
    std::cout << "Which conversion do you want to perform?" << std::endl;
    std::cin >> choice;

    if(choice == 'F' || choice == 'f'){
        double celsius;
        std::cout << "Enter the temperature in Celsius: " << std::endl;
        std::cin >> celsius;
        double fahrenheit = (celsius * 9/5) + 32;
        std::cout << "The temperature in Fahrenheit is: " << fahrenheit << std::endl;
    }
    else if(choice == 'C' || choice == 'c'){
        double fahrenheit;
        std::cout << "Enter the temperature in Fahrenheit: " << std::endl;
        std::cin >> fahrenheit;
        double celsius = (fahrenheit - 32) * 5/9;
        std::cout << "The temperature in Celsius is: " << celsius << std::endl;
    }
    else{
        std::cout << "Invalid choice!" << std::endl;
    }
}