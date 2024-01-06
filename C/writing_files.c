
#include <stdio.h>

int main()
{
   // WRITE/APPEND A FILE
   FILE *pF = fopen("C:\\Users\\Cakow\\Desktop\\test.html", "w"); //w = write, a = append, r = read, r+ = read and write, w+ = write and read, a+ = append and read, b = binary mode, t = text mode, rb = read binary, wb = write binary, ab = append binary, rt = read text, wt = write text, at = append text

   fprintf(pF, "Spongebob Squarepants");

   fclose(pF);
   
   // DELETE A FILE
   /*
   if(remove("test.txt") == 0)
   {
      printf("That file was deleted successfully!");
   }
   else
   {
      printf("That file was NOT deleted or DIDN'T EXIST! ");
   }
   */
   return 0;
}

