
#include <stdio.h>

void printAge(int *pAge)
{
   printf("You are %d years old\n", *pAge); //dereference

}

int main()
{
   // pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
   //           some tasks are performed more easily with pointers
   //           * = indirection operator (value at address)
   //           & = address operator (address of)
   //           int *pAge = &age; //pointer to an integer
   //           int *pAge, age; //pointer to an integer and an integer
   //           int *pAge, *pHeight; //pointer to an integer and a pointer to an integer
   /* 
Advantages of Using Pointers:
1. Faster Program Execution:
   Pointers allow for direct access to memory locations, reducing the time needed for variable manipulation.

2. Working on the Original Variable:
   Pointers enable direct manipulation of the original variable by referencing its memory address.

3. Data Structure Creation:
   Pointers are essential for creating dynamic data structures such as linked lists, stacks, and queues.

4. Returning Multiple Values from Functions:
   Pointers facilitate the return of multiple values from functions by passing addresses of variables.

5. Efficient Searching and Sorting:
   Pointers simplify the manipulation of large data sets, making searching and sorting operations more efficient.

6. Dynamically Memory Allocation:
   Pointers allow for dynamic memory allocation, enabling programs to allocate and deallocate memory as needed.
*/


   int age = 21;
   int *pAge = NULL ; //GOOD PRACTICE to initialize pointer to NULL
   pAge = &age ; //pointer to an integer //convention to name pointer with p in front of variable name (pAge)
   // pointer and variable must be same data type ELSE ERROR

   printAge(pAge);
   
   //printf("address of age: %p\n", &age);
   //printf("value of pAge: %p\n", &pAge);
   //printf("size of age: %d bytes\n", sizeof(age));
   //printf("size of pAge: %d bytes\n", sizeof(pAge));
   //printf("value of age: %d\n", age);
   //printf("value at stored address: %d\n", *pAge); //dereferencing

   return 0;
}