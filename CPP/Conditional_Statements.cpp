#include <iostream>

int main() {
    // Variable declaration
    int num;

    // Getting input from user
    std::cout << "Enter a number: ";
    std::cin >> num;

    // Conditional statement
    // SAME AS C
    if (num > 0) {
        std::cout << "The number is positive." << std::endl;
    } else if (num < 0) {
        std::cout << "The number is negative." << std::endl;
    } else {
        std::cout << "The number is zero." << std::endl;
    }

    return 0;
}