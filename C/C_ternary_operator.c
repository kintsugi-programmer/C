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
    
    int numberIII = (numberII>numberI) ? numberII:numberI;
    printf("%d is the highest of the two numbers you entered.",numberIII);
}

int max (int numberI, int numberII){return (numberII>numberI) ? numberII:numberI;}

//retarded version ,telling need of ternary operator
int max_retarded (int numberI, int numberII){
    if (numberII>numberI){
        return numberII;
    } else {
        return numberI;
    }
}
