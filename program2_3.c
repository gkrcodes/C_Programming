/* Conversion control characters*/
#include <stdio.h>
int main(void)
{
    int var1 = 5, var2 = 6;
    float var3 = 15.0;

    printf("The sum of %d and %d is equal to %d.\n", var1, var2, var1 + var2);
    printf("The value of var3 is %f and var1 is %d.\n", var3, var1);
    return(0);
}