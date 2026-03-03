#include <iostream>
#include <vector>

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
    return 0;
}