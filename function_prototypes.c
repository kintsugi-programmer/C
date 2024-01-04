
#include <stdio.h>

void hello(char[], int); //function prototype : tells the compiler that a function will be used later in the program
//without this, the compiler will show error of insufficient arguments and still run the program
//good error flag
//function prototype is a function declaration without the body
//function prototype is placed before main() function
//function prototype is used to ensure that calls to a function are made with the correct arguments


int main()
{
   // function prototype

   // WHAT IS IT?
   // Function declaration, w/o a body, before main()
   // Ensures that calls to a function are made with the correct arguments

   // IMPORTANT NOTES
   // Many C compilers do not check for parameter matching
   // Missing arguments will result in unexpected behavior
   // A function prototype causes the compiler to flag an error if arguments are missing

   // ADVANTAGES
   // 1. Easier to navigate a program w/ main() at the top
   // 2. Helps with debugging
   // 3. Commonly used in header files

   char name[] = "Bro";
   int age = 21;

   hello(name, age);

   return 0;
}

void hello(char name[], int age)
{
   printf("\nHello %s", name);
   printf("\nYou are %d years old", age);
}