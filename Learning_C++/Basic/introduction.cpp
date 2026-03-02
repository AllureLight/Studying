#include <iostream>
#include <vector>

typedef std::vector<int> IntVector; //typedef is used to create an alias for a type

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
    return 0;
}