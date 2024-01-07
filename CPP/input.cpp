//std::cin is used to get input from the user.
#include <iostream>

int main() {
    // Variable declaration
    int number;

    // Getting input from user
    std::cout << "Enter a number: ";
    std::cin >> number; //wow, this is so much easier than C

    // Displaying the entered number
    std::cout << "You entered: " << number << std::endl;

    return 0;
}