/*program to determine resonant frequency of a parallel LC circuit*/

#include <stdio.h>
#include <math.h>

#define MILLI 1e-3
#define MICRO 1e-6
#define KILO 1e3
#define PI 3.14159

int main(void)
{
    float L,C,r,f_res;
    puts ("Program to determine resonant frequency of a parallel LC circuit");
    puts("Enter C (in uf), L (in mH) and r (ohms)");
    scanf("%f %f %f", &C, &L, &r);
    C = C*MICRO;
    L=L*MILLI;

    f_res = 1.0/(2.0*PI)*sqrt(1/(L*C) - (r*r)/(4*L*L));

    printf("r=%.2f ohm, C=%.2f uf, L=%.2f mH\n", r, C/MICRO, L/MILLI);
    printf("Resonant frequency is %.3f KHz\n", f_res/KILO);
    return(0);
}