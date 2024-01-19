#include <iostream>
#include <string>

int main() {
    // Read input word
    std::string word;
    std::cin >> word;

    // Capitalize the first letter and keep the rest unchanged
    word[0] = toupper(word[0]);

    // Print the result
    std::cout << word << std::endl;

    return 0;
}
