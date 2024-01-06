#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{

//C math.h functions tutorial example explained

//#C #math.h #functions

    double A = sqrt(9);
    double B = pow(2, 4);
    int C = round(3.14); //round down if <.5 or up >=.5
    int D = ceil(3.14); //always round number up
    int E = floor(3.99); //always round down
    double F = fabs(-100); //absolute func
    double G = log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);
    
    printf("\n%lf", A);

    return 0;
}
