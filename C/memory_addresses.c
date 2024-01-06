#include <stdio.h>

int main()
{
   // memory = an array of bytes within RAM (street)
   // memory block = a single unit (byte) within memory (house), used to hold some value (person)
   // memory address = the address of where a memory block is located (house address)

   char a;
   char b[1];

   printf("%zu bytes\n", sizeof(a));
   printf("%zu bytes\n", sizeof(b));

   printf("%p\n", (void*)&a);
   printf("%p\n", (void*)&b);

   // now addresses ordering is of hexadecimal type
   // hexadecimal is base 16
   // 0-9 and A-F
   // 0-9 = 0-9
   // 10 = A
   // 10   = F 

   char a1;
   char b1;
   char c1;

   int a2;
   int b2;
   int c2;

   printf("%zu bytes\n", sizeof(a1));
   printf("%zu bytes\n", sizeof(b1));
   printf("%zu bytes\n", sizeof(c1));

   printf("%p\n", (void*)&a1);
   printf("%p\n", (void*)&b1);
   printf("%p\n", (void*)&c1);

   printf("%zu bytes\n", sizeof(a2));
   printf("%zu bytes\n", sizeof(b2));
   printf("%zu bytes\n", sizeof(c2));

   printf("%p\n", (void*)&a2);
   printf("%p\n", (void*)&b2);
   printf("%p\n", (void*)&c2);

   // memory addresses are always in hexadecimal
   

   /*Output study case:
1 bytes
1 bytes
0x7ffc8c09f2d4 //gap of 1 byte
0x7ffc8c09f2e7 //gap of 1 byte
1 bytes
1 bytes
1 bytes
0x7ffc8c09f2d5 //gap of 1 byte
0x7ffc8c09f2d6 //gap of 1 byte
0x7ffc8c09f2d7 //gap of 1 byte
4 bytes
4 bytes
4 bytes
0x7ffc8c09f2d8 //gap of 4 bytes
0x7ffc8c09f2dc //gap of 4 bytes
0x7ffc8c09f2e0 //gap of 4 bytes

%p format specifier in the printf statements. The %p format specifier is specifically for printing pointers, and you need to cast the variables to (void*) before printing their addresses. 
I also changed %d to %zu for the sizeof operator because the result of sizeof is of type size_t, and using the correct format specifier avoids potential issues.
   */

   return 0;
}
