/* program to display hexadecimal value as decimal and octal*/

#include <stdio.h>
int main(void)
{
    int value;
    puts("Enter a hexadecimal value ");
    scanf("%x", &value);

    printf("Decimal = %d, Octal = %o, Hex = %x\n", value, value, value);
    return (0);
    

}