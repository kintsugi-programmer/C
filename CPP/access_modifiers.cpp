#include <iostream>
#include <string>

// Class declaration
class Student {
private:
    // Private members
    int studentID;
    std::string studentName;
    int age;

public:
    // Public members

    // Constructor to initialize private members
    Student(int id, const std::string& name, int studentAge) : studentID(id), studentName(name), age(studentAge) {}

    // Public member function to display student information
    void displayStudentInfo() {
        std::cout << "Student ID: " << studentID << std::endl;
        std::cout << "Student Name: " << studentName << std::endl;
        std::cout << "Age: " << age << std::endl;
    }

    // Getter for student name (demonstrating encapsulation)
    std::string getStudentName() const {
        return studentName;
    }

    // Setter for age (demonstrating encapsulation)
    void setAge(int newAge) {
        if (newAge >= 0) {
            age = newAge;
        } else {
            std::cout << "Age cannot be negative." << std::endl;
        }
    }
};

int main() {
    // Creating an object of the Student class
    Student alice(1, "Alice", 20);

    // Accessing public member function to display information
    alice.displayStudentInfo();

    // Accessing private member indirectly using public member functions
    std::cout << "Student Name: " << alice.getStudentName() << std::endl;

    // Accessing private member indirectly using public setter function
    alice.setAge(21);

    // Trying to access private members directly (results in a compilation error)
    // alice.studentID = 2; // Error: 'int Student::studentID' is private

    return 0;
}
/*
In this example, we have a Student class with private and public members. 
The private members (studentID, studentName, and age) are encapsulated within the class, and 
their access is controlled through public member functions (displayStudentInfo(), getStudentName(), 
and setAge()). The comments in the code explain the use of access specifiers and 
demonstrate encapsulation in a simple scenario.






*/