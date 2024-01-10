#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    // Default Constructor
    Person() : name("Unknown"), age(0) {
        std::cout << "Default Constructor called\n";
    }
    /*
Constructors:

Purpose:

Initialize objects of a class when they are created.
Ensure objects start in a valid and consistent state.
Allocate memory, set initial values, and perform necessary setup tasks.
Key features:

Same name as the class.
No return type (not even void).
Can be overloaded (multiple constructors with different parameters).
Can be parameterized to allow for different initialization options.
Called automatically when an object is created:
Using the class name as a function (e.g., MyClass obj;)
Using the new operator (e.g., MyClass* ptr = new MyClass();)
    
    */

    // Parameterized Constructor
    Person(const std::string& n, int a) : name(n), age(a) {
        std::cout << "Parameterized Constructor called\n";
    }

    // Copy Constructor
    Person(const Person& other) : name(other.name), age(other.age) {
        std::cout << "Copy Constructor called\n";
    }
    /*
This is a copy constructor, a special member function that is used to create a new object as a copy of an existing object. It is invoked when you initialize a new object with an existing object, either directly or when passing an object by value.

Parameters:
const Person& other: This parameter is a reference to the object that you want to copy. It's a reference to another Person object, and the const indicates that the original object will not be modified during the copy process.
Member Initialization List:
: name(other.name), age(other.age): This is the member initialization list. It is used to initialize the members of the new object with the values of the corresponding members from the object being copied (other in this case).
name(other.name): It initializes the name member of the new object with the name member of the object being copied.
age(other.age): It initializes the age member of the new object with the age member of the object being copied.
Copy Constructor Purpose:
The copy constructor is crucial when you create a new object based on an existing one. It ensures that the new object has the same values for its members as the original object.

Why Use a Copy Constructor?
Deep Copy vs. Shallow Copy: If your class contains dynamically allocated memory or other resources, a copy constructor allows you to perform a deep copy (creating new copies of resources) instead of a shallow copy (copying references to resources).

Custom Initialization: It gives you the ability to customize the way member variables are initialized when a new object is created as a copy of an existing one.

Implicit Copying: It is invoked automatically in various situations, such as when passing objects by value or when an object is returned from a function.

Understanding and using copy constructors is important for proper object copying and maintaining the integrity of your class instances.
    */

    // Destructor
    ~Person() {
        std::cout << "Destructor called for " << name << "\n";
    }
    /*Destructors:

Purpose:

Clean up resources when an object is destroyed.
Deallocate memory, release resources (e.g., close files, network connections), perform final cleanup actions.
Key features:

Same name as the class, preceded by a tilde (~).
No arguments and no return type.
Only one destructor per class.
Called automatically when an object goes out of scope or is explicitly deleted using the delete operator.

Additional notes:

Default constructors: If you don't define any constructors, the compiler provides a default constructor that does nothing.
Copy constructors: Used to create a new object as a copy of an existing object.
Explicit constructors: Constructors can be made explicit to prevent implicit conversions.
Key takeaways:

Constructors are essential for ensuring objects are properly initialized.
Destructors are crucial for releasing resources and preventing memory leaks.
Understanding constructors and destructors is fundamental to working with classes effectively in C++.
*/

    void displayInfo() {
        std::cout << "Name: " << name << ", Age: " << age << "\n";
    }
};

int main() {
    std::cout << "Creating persons...\n";
    
    // Default Constructor
    Person person1;
    person1.displayInfo();

    // Parameterized Constructor
    Person person2("John Doe", 25);
    person2.displayInfo();

    // Copy Constructor
    Person person3 = person2;  // Equivalent to Person person3(person2);
    person3.displayInfo();

    std::cout << "Exiting the program...\n";

    // Destructors will be automatically called when objects go out of scope.
    // Output will show the order of constructor and destructor calls.
    return 0;
}
