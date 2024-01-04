
#include <stdio.h>

void birthday(char x[], int y) //magic set of parameter datatypes to be required in func
{
   printf("\nHappy birthday dear %s!", x);
   printf("\nYou are %d years old!", y);
}

int main()
{
   char name[] = "Bro";
   int age = 21;

   birthday(name, age); 

   return 0;
}

/*
Parameters v/s Arguments 
In short:

- **Parameter:** A variable in a function/method definition.
- **Argument:** A value passed to a function/method when it's called.

Parameters are like placeholders in a function, and arguments are the actual values you put into those placeholders when using the function.

*/