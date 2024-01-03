/*Program to determine parallel equivalent resistance*/
/*of two resistors 1000 ohm and 500 ohm*/
/*With variable initialization during variable declaration*/

#include <stdio.h>
int main(void)
{
    float resistance_1 = 1000, resistance_2 = 500, eq_resistance;
    
    eq_resistance = 1/(1/resistance_1 + 1/resistance_2);
    printf("Equivalent resistance is %f ohm", eq_resistance);
    return (0);
}