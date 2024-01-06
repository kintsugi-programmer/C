#include <stdio.h>

int main() {

    // variable =   Allocated space in memory to store a value.
    //                     We refer to a variable's name to access the stored value.
    //                     That variable now behaves as if it was the value it contains.
    //                     BUT we need to declare what type of data we are storing.

    int x;            //declaration
    x = 123;       //initialization
    int y = 321; //declaration + initialization

    int age = 21;              //integer
    float gpa = 2.05;       //floating point number
    char grade = 'C';        //single character
    char name[] = "Bro"; //array of characters
    
    // % = format specifier
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);


    // Integer variable
    int age = 25;
    printf("Age: %d\n", age);

    // Floating-point variable
    float height = 5.9;
    printf("Height: %.2f\n", height);

    // Double-precision floating-point variable
    double distance = 12345.6789;
    printf("Distance: %.4f\n", distance);

    // Character variable
    char grade = 'A';
    printf("Grade: %c\n", grade);

    // Boolean variable
    _Bool isStudent = 1; // true
    printf("Is student? %d\n", isStudent);

    // Short integer variable
    short temperature = -10;
    printf("Temperature: %hd\n", temperature);

    // Long integer variable
    long population = 7000000000L;
    printf("Population: %ld\n", population);

    // Long long integer variable
    long long veryLargeNumber = 9223372036854775807LL;
    printf("Very Large Number: %lld\n", veryLargeNumber);

    // Unsigned integer variable
    unsigned int count = 100;
    printf("Count: %u\n", count);

    

    myFunction(); // Call the function

    return 0;
}

// Void variable (used for functions with no return value)
    void myFunction() {
        // Function code
        printf("Inside a function.\n");
    }