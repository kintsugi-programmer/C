#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{

//C how to accept user input scanf fgets tutorial example explained
//IN FILE>PREF>SETTING>SEARCH CODE RUNNER >RUN IN TERMINAL SELECT >>>> CODE WILL RUN IN TERMINAL (where you cang ive inputs )

    char name[25]; //bytes
    int age;

    printf("\nWhat's your name?");

    //scanf("%s", &name); WE DIDN'T USED THAT BECAUSE IT READS INPUT TILL WHITE SPACES ;0 
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0'; //WOW GUJAAD OF REMOVING WHITE SPACES

    printf("How old are you?");
    scanf("%d", &age);

    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old\n", age);
}