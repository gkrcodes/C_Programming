/*program to bitwise AND, OR, NAND, NOR and EX-OR*/
#include <stdio.h>
int main(void)
{
    int value1, value2;
    printf("Enter two hex values >>>");
    scanf("%x %x", &value1, &value2);

    printf("Values ANDed is %x\n", value1 & value2);
    printf("Values ORed is %x\n", value1 | value2);
    printf("Values Ex-ORed is %x\n", value1 ^ value2);
    printf("Values NANDed is %x\n", ~(value1 & value2));
    printf("Values NORDed is %x\n", ~(value1 | value2));

    return (0);



}
