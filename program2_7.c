/*Program to determine the resonant frequency of the LC series circuit*/

#include <stdio.h>
#include <math.h> /*required for the sqrt() function*/

#define PI 3.14159

int main(void)
{
    float L = 1e-3, C = 1e-6, f_res;

    puts("Program to calculate resonant frequency of an LC series circuit");

    f_res = 1/(2*PI*sqrt(L*C));

    printf("C = %.3e F, L = %.3e H\n", C, L);
    printf("Resonant frequency is %.3f Hz\n", f_res);
    return (0);

}