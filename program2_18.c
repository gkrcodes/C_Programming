/* program to display decimal integer in hexadecimal and octal*/

#include <stdio.h>

int main(void)
{
    int value;
    puts("Enter integer value (-32768 to 32767) >>>");
    scanf("%d", &value);
    printf("Decimal = %d, octal = %o, Hex = %x", value, value, value);
    return (0);
}