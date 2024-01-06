
#include <stdio.h>

int main()
{
   FILE *pF = fopen("poem.txt", "r");
   char buffer[255];

   //ERROR HANDLING

   if(pF == NULL) // if file doesn't exist
   {
      printf("Unable to open file!\n");
   }
   else
   {
      while(fgets(buffer, 255, pF) != NULL) // fgets() reads a line from the specified stream and stores it into the string pointed to by str. WOW!
      {
         printf("%s", buffer);
      }
   }

   fclose(pF);

   return 0;
}