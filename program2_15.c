/*program to determine the resonant frequency of a parallel LC circuit*/

#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main(void)
{
    float L, C, r, f_res;

    puts("Program to determine resonant frequency of a parallel LC circuit");
    puts("Enter C, L and r >>>");
    scanf("%f %f %f", &C, &L, &r);
    f_res = 1.0/(2.0*PI)*sqrt(1/(L*C) - (r*r)/(4*L*L));
    printf("r = %.3e ohm, C=%.3e F, L=%.3e H\n", r, C, L);
    printf("Resonant frequency is %.3f Hz\n", f_res);
    return (0);

}