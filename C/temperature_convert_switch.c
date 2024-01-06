
#include <stdio.h>
#include <ctype.h>

int main(){
    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper((char)unit);

    switch (unit)
    {
        case 'C':
            printf("\n Enter the temp in Celcius: ");
            scanf("%f", &temp);
            temp = (temp * 9/5) + 32;
            printf("\nThe temperature in Farenheit is: %.1f", temp);
            break;
        case 'F':
            printf("\n Enter the temp in Farenheit: ");
            scanf("%f", &temp);
            temp = ((temp - 32)*5)/9;
            printf("\nThe temp in Celsius is: %.1f", temp);
            break;
        default:
            printf("\n %c is not a valid unit of measurement", unit);
            break;
    }

    return 0;
}