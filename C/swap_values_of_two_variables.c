
#include <stdio.h>
#include <string.h>

int main()
{ 
   //------- Example 1 -------
   //char x = 'X';
   //char y = 'Y';
   //char temp;

   //temp = x;
   //x = y; //JUST OVERFLOW
   //y = temp;

   //printf("x = %c\n", x);
   //printf("y = %c\n", y);

   //------- Example 2 -------
   char x[15] = "water";
   char y[15] = "soda";
   char temp[15]; //we need to make sure that the temp variable is the same size as the other two variables.
   //IS IT ARRAY OR STRING? IT IS A STRING.BUT NOT ARRAY BECAUSE IT IS NOT A COLLECTION OF CHARACTERS.
   //WHY? BECAUSE IT IS A COLLECTION OF CHARACTERS.

   strcpy(temp, x);
   strcpy(x, y);
   strcpy(y, temp);

   printf("x = %s\n", x);
   printf("y = %s\n", y);
 
   return 0; 
}