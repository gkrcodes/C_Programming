/*program to determine equivalent resistance of resistors in parallel circuit*/

#include <stdio.h>


int main(void)
{
    float R1, R2, R3, R_equ;

    puts("Program to determine equivalent resistance");
    puts("of three resistances connected in parallel");
    puts("Enter three values of resistance >>>");

    scanf("%f %f %f", &R1, &R2, &R3);

    R_equ = 1.0/(1.0/R1 + 1.0/R2 + 1.0/R3);
    printf("R1 = %8.3f ohms, R2 = %8.3f ohms, R3 = %8.3f ohms\n", R1, R2, R3);
    printf("Equivalent resistance is %8.3f ohms\n", R_equ);
    return (0);
}