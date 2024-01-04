#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main(){
    int numberI = 0;
    int numberII = 0;
    printf("What is the first number?\n");
    scanf("%d", &numberI);
    printf("\nWhat is the second number?\n");
    scanf("%d", &numberII);
    int numberIII = (numberI>numberII)? numberI:numberII;
    printf("%d is the highest of the two numbers you entered.",numberIII);
}

