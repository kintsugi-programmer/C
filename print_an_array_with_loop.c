
#include <stdio.h>

int main()
{
   double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 30.0};
   
//printf("%d bytes\n", sizeof(prices)); 

   for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++) //we use this to get the size of the array. which will help in future programs when we change the size of the array.
   //sizeof(prices) = 48 bytes
   //sizeof(prices[0]) = 8 bytes
   //48/8 = 6
   //so we know that there are 6 elements in the array.
   //GOOD PRACTICE TO USE THIS METHOD TO GET THE SIZE OF THE ARRAY.
   
   {
      printf("$%.2lf\n", prices[i]);
   }

   return 0;
}

