#include <math.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
//     C circumference of a circle practice program

// #C #program #circumference

    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nEnter the radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\ncircumference: %lf", circumference);
    printf("\narea: %lf", area);

    return 0;
}

