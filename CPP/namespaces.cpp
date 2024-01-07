// C++
#include <iostream>

// Declare a namespace named "Math"
namespace Math {
    int add(int a, int b) {
        return a + b;
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }

    int divide(int a , int b){
        return a / b;
    }
}

// Declare another namespace named "Utility"
namespace Utility {
    void printMessage(const char* message) {
        std::cout << message << std::endl;
    }
}


// Usage
int main() {
    // Access functions from the "Math" namespace
    int sum = Math::add(5, 3); //wow
    int difference = Math::subtract(8, 4);
    int product = Math::multiply(5, 5);
    int quotient = Math::divide(10,10);

    // Access function from the "Utility" namespace
    Utility::printMessage("Hello, C++!");

    return 0;
}
/*
Certainly! Namespaces are a feature in C++ that allow you to 
organize code into separate logical units, preventing naming 
conflicts and providing a way to structure and modularize your code. 
They help avoid naming collisions between different parts of a program,
 especially when libraries or multiple developers contribute to a project.

Here's an explanation of namespaces with an example:

Namespaces in C++:
A namespace is a declarative region 
that provides a scope to the identifiers (variables, functions, 
classes, etc.) inside it. It helps in avoiding naming conflicts 
and enhances code organization.

In this example:

The Math namespace contains functions related to mathematical operations.
The Utility namespace contains a function for printing messages.
The :: (scope resolution operator) is used to access members within a 
namespace.
By using namespaces, you can avoid naming conflicts. For instance, if 
another part of your program or a library has a function named add, 
it won't clash with the Math::add function.

Namespaces are particularly useful in larger projects where different
modules or libraries might have components with the same names. 
They provide a way to encapsulate and organize code, improving 
code readability and maintainability.

*/