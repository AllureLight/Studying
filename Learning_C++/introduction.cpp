#include <iostream>
#include <vector> //vector
#include <cmath> //mathematical functions
#include <ctime> //random numbers

typedef std::vector<int> IntVector; //typedef is used to create an alias for a type
typedef std::string text_t;
using number_t = int; //using is another way to create an alias for a type, it is more modern and preferred in C++11 and later

namespace firts{
    int x = 2;
}

int main() {
    //HELLO WORLD
    //endl is used to end the line and flush the output buffer
    std::cout << "Hello World!" << std::endl;
    std::cout << "Testing" << '\n';


    //DECLARATION OF VARIABLES
    int x = 5; //declariton integer
    //double y = 6.5; declation double
    //bool z = true; declation boolean
    //char c = 'A'; declation char
    //std::string s = "Hello"; declation string
    std::string s2 = "123 Test"; //declation string with value
    std::cout << "Value of x in main: " << x << "\n";
    std::cout << s2;


    //CONSTANTS
    const double pi = 3.14; //const is used to declare a constant variable that cannot be changed
    std::cout << "\nValue of pi: " << pi;


    //NAMESPACE
    std::cout << "\nValue of x in first: " << firts::x; //accessing variable x from namespace first


    //TYPEDEF
    //typedef is used to create an alias for a type, it can be used to make code more readable and easier to maintain
    text_t firtname = "John"; //using typedef to declare a string variable
    //number_t age = 30; //using using to declare an integer variable


    //ARTHIMETIC OPERATORS
    // + - * / % are the basic arithmetic operators in C++


    //TYPE CONVERSION
    double example = (int) 3.14; //type casting double to int, it will truncate the decimal part and pi will be 3
    std::cout << "\nValue of example after type conversion: " << example;
    std::cout << "\nValue of char 100: " << (char) 100;
    int num1 = 8;
    int num2 = 10;
    double num3 = num1/(double) num2; //type casting num2 to double to get a more accurate result
    std::cout << "\nValue of num3 after type conversion: " << num3;


    //USER INPUT
    std::string name;
    std::cout << "\nEnter your name: ";
    std::cin >> name; //taking input from user and storing it in variable name
    //std::getline(std::cin, name); taking input from user and storing it in variable name, it will allow to take input with spaces
    //std::getline(std::cin >> std::ws, name); taking input from user and storing it in variable name, 
    //it will allow to take input with spaces and ignore leading whitespace


    //MATH FUNCTIONS
    //std::max(value1, value2) returns the maximum of two values
    //std::min(value1, value2) returns the minimum of two values
    //pow(base, exponent) returns the result of base raised to the power of exponent
    //sqrt(value) returns the square root of a value
    //abs(value) returns the absolute value of a number
    //round(value) returns the nearest integer to a value
    //ceil(value) returns the smallest integer that is greater than or equal to a value
    //floor(value) returns the largest integer that is less than or equal to a value


    //IF AND ELSE STATEMENTS
    //SWITCHES
    //I already know


    //TERNARY OPERATOR
    //ternary operator is a shorthand for if-else statement, 
    //it takes three operands: a condition, a value to return 
    //if the condition is true, and a value to return if the condition is false
    int grade = 85;
    grade >= 90 ? std::cout << "Pass" : std::cout << "Fail";
    grade % 2 == 0 ? std ::cout << "\nGrade is even" : std::cout << "\nGrade is odd";
    bool boolean = true;
    std:: cout << (boolean ? "\nBoolean is true" : "\nBoolean is false");


    //LOGICAL OPERATORS
    //I already know


    //USEFUL STRING METHODS
    //length() returns the length of a string
    //Empty() returns true if the string is empty, false otherwise
    //Clear() clears the contents of a string
    //Append() adds a string to the end of another string
    //[string name].at(index) returns the character at the specified index
    //[string name].insert(index, string) inserts a string at the specified index
    //[string name].find(string) returns the index of the first occurrence of a string, or std::string::npos if not found
    //[string name].erase(index, length) removes a portion of the string starting at the specified index and spanning the specified length


    //WHILE AND DO-WHILE LOOPS
    //I already know


    //FOR LOOPS
    //I already know


    //BREAK AND CONTINUE STATEMENTS
    //I already know
    //break exit a loop | continue skips the interation


    //RANDOM NUMBERS
    //srand(time(NULL)) is used to seed the random number generator with the current time,
    //rand() is used to generate a random number, it will return a number between 0 and RAND_MAX


    //USER DEFINED FUNCTIONS
    //I already know


    //RETURN KEYWORD
    //I already know


    //OVERLOADING FUNCTIONS
    //double mathematic(){} <- Function one
    //double mathematic(int a){} <- Function two
    //double mathematic(int a, int b){} <- Function three


    //VARIABLE SCOPE
    //I already know
    return 0;
}