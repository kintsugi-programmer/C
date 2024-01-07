#include <iostream>
int main() {
    // Dynamic memory allocation
    int* numPtr = new int; // Allocate memory for an integer
    
    // Assign a value to the memory location pointed to by numPtr
    *numPtr = 42;
    // Print the value stored at the location pointed to by numPtr

    std::cout << "Value stored at dynamic memory location: " << *numPtr << std::endl;
    *numPtr = 53;
    std::cout << "Value stored at dynamic memory location: " << *numPtr << std::endl;
    // Print the memory address of numPtr itself

    // Don't forget to free the allocated memory
    // Otherwise, we have a memory leak
    // This is analagous to free() in C
    // delete is an operator, not a function
    delete numPtr;

    return 0;
}