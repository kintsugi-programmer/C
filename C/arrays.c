
#include <stdio.h>

int main()
{
   // array = a data structure that can store many values of the same data type.
   //          each value is stored in a numbered "slot".
   //          arrays have a fixed size.
   //          arrays are created in the stack.
   //          arrays are created using [].
   //          arrays are 0-indexed.
   //          arrays can be initialized using {}.
   //          arrays can be initialized with a size or without a size.
   //          arrays can be initialized with a size and values or without a size and values.


   //double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};
   double prices[5];

   prices[0] = 5.0;
   prices[1] = 10.0;
   prices[2] = 15.0;
   prices[3] = 25.0;
   prices[4] = 20.0;

   printf("$%.2lf", prices[0]);
  
   return 0;
}