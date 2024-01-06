
#include <stdio.h> 
#include <string.h>

//eg1
typedef char user[25];
//eg2
typedef struct
{
   char name[25];
   char password[12];
   int id;
} User;

int main() 
{
   // typedef = reserved keyword that gives an existing datatype a "nickname"
   //           used to make code more readable and easier to maintain
   //           especially useful for long data types like structs
   // typedef <data type> <nickname>;

   // eg1 :
   user name = "Bro";
   printf("%s\n", name);

   // eg2 :
   User user1 = {"Bro", "password123", 123456789};
   User user2 = {"Bruh", "password321", 987654321};

   printf("%s\n", user1.name);
   printf("%s\n", user1.password);
   printf("%d\n", user1.id);
   printf("\n");
   printf("%s\n", user2.name);
   printf("%s\n", user2.password);
   printf("%d\n", user2.id);
   printf("\n");
   


   return 0; 
}