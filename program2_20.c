/* program to ASCII code to character*/

#include <stdio.h>
int main(void)
{
    int value;
    puts("Enter ASCII code (greater than 33) >>>");
    scanf("%d", &value);
    printf("Code = %d, character = %c\n", value, value);
    return(0);
    
}