/*Calculate equivalent resistance of three resistors connected in parallel.*/
#include <stdio.h>
int main(void)
{
    float r1, r2, r3;
    float eqr;
    r1 = 1.0e3;
    r2 = 500.0;
    r3 = 250.0;
    eqr =  1/((1/r1) + (1/r2) + (1/r3));
    printf("The equivalent resistance of resistors %d ohms, %d ohms and %d ohms connected in parallel is equal to %.3f ohms.", r1, r2, r3, eqr);
    return (0);
}