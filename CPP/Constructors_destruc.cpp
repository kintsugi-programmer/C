
#include <iostream>

// Class with constructor and destructor
class MyClass {
public:
    // Constructor
    MyClass() {
        std::cout << "Constructor called!" << std::endl;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called!" << std::endl;
    }
};

int main() {
    // Creating an object invokes the constructor
    MyClass obj;

    // Destructor is called when the object goes out of scope

    return 0;
}