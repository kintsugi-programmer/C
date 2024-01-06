
#include <stdio.h>
 
int main()
{
   // BITWISE OPERATORS = special operators used in bit level programming
   //                     (bit level programming is rare)
   //                     (bit level programming is used in embedded systems)
   //                     (embedded systems are small computers that are built into larger systems)
   //                     (embedded systems are used in cars, microwaves, etc.)



   //                                          (knowing binary is important for this topic)
   
   // ~ = NOT
   
   // 0 = 00000000
   // 1 = 00000001
   // 2 = 00000010
   // 3 = 00000011
   // 4 = 00000100
   // 5 = 00000101
   // 6 = 00000110
   // 7 = 00000111
   // 8 = 00001000
   // 9 = 00001001
   // 10 = 00001010





   // & = AND
   // | = OR
   // ^ = XOR
   // <<  left shift ... shifts all bits to the left
   // >>  right shift ... shifts all bits to the right

   int x = 6;  //    6 = 00000110
   int y = 12; // 12 = 00001100 
   int z = 0;  //    0 = 00000000

   z = x & y; // 4 = 00000100 // (only 1 & 1 = 1, everything else = 0)
   printf("AND = %d\n", z);

   z = x | y; // 14 = 00001110 // (only 0 | 0 = 0, everything else = 1)
   printf("OR = %d\n", z);

   z = x ^ y; // 10 = 00001010 // (only 1 ^ 0 = 1, everything else = 0)
   printf("XOR = %d\n", z);

   z = x << 2; // 24 = 00011000 // (shifts all bits to the left by 2)
   printf("SHIFT LEFT = %d\n", z);

   z = x >> 2; // 1 = 00000001 // (shifts all bits to the right by 2)
   printf("SHIFT RIGHT = %d\n", z);

   return 0;
}