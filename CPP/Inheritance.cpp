#include <iostream>

// Base class
class Shape {
public:
    void draw() {
        std::cout << "Drawing a shape." << std::endl;
    }
};

// Derived class
class Circle : public Shape {
public:
    void draw() {
        std::cout << "Drawing a circle." << std::endl;
    }
};

int main() {
    Shape myShape;
    myShape.draw(); // Calls the draw method in Shape

    Circle myCircle;
    myCircle.draw(); // Calls the overridden draw method in Circle

    return 0;
}