/* program to calculate resonant frequency of the parallel LC circuit. */
#include <stdio.h>
#include <math.h> /* for sqrt() function*/

#define PI 3.14159

int main(void)
{
    float L = 1.0e-3, C = 1.0e-6, r = 1.0, f_res;

    puts("Program to calculate the resonant frequency of a parallel LC circuit.");

    f_res = 1/(2*PI)*sqrt((1/(L*C)) - (r*r)/(4*L*L));

    printf("f = %.3e ohm, C = %.3e F, L = %.3e H\n", r, C, L);
    printf("Resonant frequency is %.3f Hz\n", f_res);
    return(0);
}