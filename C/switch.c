
#include <stdio.h>

int main(){

    // switch = A more efficient alternative to using many "else if" statements (using else if multiple times is bad practice)
    //          allows a value to be tested for equality against many cases

   char grade;

   printf("\nEnter a letter grade: ");
   scanf("%c", &grade);

   switch(grade){
      case 'A':
         printf("perfect!\n");
         break; // without every break it sees other commands as statements and execute all statements below it inside switch
      case 'B':
         printf("You did good!\n");
         break;
      case 'C':
         printf("You did okay!\n");
         break;
      case 'D':
         printf("At least it's not an F!\n");
         break;
      case 'F':
         printf("YOU FAILED!\n");
         break;
      default: // it's like else
         printf("Please enter only valid grades");
   }

    return 0;
}