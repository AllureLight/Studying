#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Enter the lengths of the two sides of the right triangle: \n";
    std::cin >> a >> b;
    c = sqrt(pow(a,2) + pow(b,2));
    std::cout << "The length of the hypotenuse is: " << c;
    return 0;
}