
#include <iostream>

// Function overloading
// Functions can have the same name as long as they have different signatures
// Signatures are determined by the number and types of arguments
// Return type is not part of the signature
// Function overloading is a form of polymorphism
// Polymorphism means "many forms"
// In this case, the same function name can have many forms
// This is also called "ad hoc polymorphism"
// Ad hoc means "for this purpose only"
// This is in contrast to "parametric polymorphism"
// Parametric polymorphism is when a function can be written generically
// and can be used with many different types
// This is also called "generic programming"
// In C++, this is done with templates
// In Java, this is done with generics
// In Python, this is done with duck typing
// Duck typing means that if it walks like a duck and quacks like a duck,
// then it must be a duck
// In other words, if an object has the same methods as a duck,
// then it must be a duck
// This is in contrast to "structural typing"
// Structural typing means that if an object has the same structure as a duck,
// then it must be a duck
// In other words, if an object has the same methods and attributes as a duck,
// then it must be a duck
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

std::string add(std::string a, std::string b) {
    return a + b;
}

int main() {
    std::cout << "Sum of integers: " << add(3, 5) << std::endl;
    std::cout << "Sum of doubles: " << add(3.5, 2.7) << std::endl;
    std::cout << "Sum of strings: " << add("Hello", "World") << std::endl;

    return 0;
}