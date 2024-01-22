/* program to determine the resonant frequency of a series LC circuit*/

#include <stdio.h>
#include<math.h>
#define PI 3.14159

int main(void)
{
    float L, C, f_res;
    puts("Program to resonant frequency of a series");
    puts("LC circuit");

    puts("Enter capacitance and inductance");

    scanf("%f %f", &C, &L);
    f_res = 1.0/(2.0*PI*sqrt(L*C));
    printf("C = %.3f, L = %.3f \n", C, L);
    printf("Resonant frequency is %.3f Hz\n", f_res);
    return (0);


}