
#include <stdio.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

int main()
{
    // enum = a user defined type of named integer identifiers
    //              helps to make a program more readable
    //              inside or outside of main function

    //              helps to make a program more maintainable
    //              helps to make a program more portable
    //              helps to make a program more flexible
    //              helps to make a program more extensible
    //              helps to make a program more scalable
    //              helps to make a program more robust
    //              helps to make a program more reliable
    //              helps to make a program more reusable
    //              helps to make a program more modular
    //              helps to make a program more efficient
    //              helps to make a program more effective
    //              helps to make a program more secure
    //              helps to make a program more testable
    //              helps to make a program more debuggable
    //              helps to make a program more maintainable
    //              helps to make a program more readable
    //              helps to make a program more understandable
    //              helps to make a program more comprehensible
    //              helps to make a program more concise
    //              helps to make a program more expressive
    //              helps to make a program more elegant
    //              helps to make a program more simple
    //              helps to make a program more straightforward
    //              can be used to define a set of constants
    //              can be used to define a set of flags
    //              can be used to define a set of options
    //              can be used to define a set of states
    //              can be used to define a set of choices
    //              can be used to define a set of values
    //              can be used to define a set of status codes
    //              can be used to define a set of error codes
    //              can be used to define a set of return codes
    //              can be used to define a set of bit masks
    //              can be used to define a set of bit flags
    //              can be used to define a set of bit fields
    //              can be used to define a set of bit positions
    //              can be used to define a set of bit values
    //              can be used to define a set of bit patterns
    //              can be used to define a set of bit sequences
    //              can be used to define a set of bit combinations
    //              can be used to define a set of bit permutations
    //              can be used to define a set of bit arrangements
    //              can be used to define a set of bit orders
    //              can be used to define a set of bit groupings
    //              can be used to define a set of bit placements
    //              can be used to define a set of bit distributions
    //              can be used to define a set of bit allocations
    //              can be used to define a set of bit assignments

   enum Day today;
   today = Sun; // today = 1
   
//enums are NOT strings, they are integers
   if(today == Sun || today == Sat) // if(today == 1 || today == 7) we can use the numbers instead of the names
   {
      printf("\nIt's the weekend! Party time!");
   }
   else
   {
      printf("\nI have to work today :(");
   }
 
   return 0;
}

