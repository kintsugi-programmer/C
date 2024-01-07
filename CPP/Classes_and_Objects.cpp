#include <iostream>
//class declaration
class Person
{
    // Access specifier
    public:
    int id;
    std::string name;
    int age;

    void display()
    {
        std::cout << "ID: " << id << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
}; // Don't forget the semicolon

int main()
{
    // Object creation
    Person bro;
    bro.id = 1;
    bro.name = "Bro";
    bro.age = 20;

    bro.display();

    return 0;
}