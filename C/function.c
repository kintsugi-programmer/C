
#include <stdio.h>

//we use fuctions to remove repeating of code (which is poor practice)
void birthday()
{
   printf("\nHappy birthday to you!");
   printf("\nHappy birthday to you!");
   printf("\nHappy birthday dear...YOU!");
   printf("\nHappy birthday to you!\n");
}
// {}...joke : these are 2 telephones talking to each other ;0
int main()
{
   birthday(); // invoking function (calling function)
   birthday();
   birthday();

   return 0;
}