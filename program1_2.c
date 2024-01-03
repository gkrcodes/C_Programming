/* program to display an ASCII chracter for an entered decimal value*/
#include <stdio.h>

int main(void)
{
    int value;
    printf("Enter a decimal value >>");
    scanf("%d", &value);

    printf("Equivalent ASCII character is %c\n", value);

    return(0);
}