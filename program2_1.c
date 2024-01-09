#include <stdio.h>
/* difference between the printf and puts*/

int main (void)
{
    printf("Enter the value of the resistance");
    printf("Enter the value of the resistance\n");
/* the newline is NOT automatically added to the string in printf*/
/* We need to explicitly denote that we need newline character with "\n"*/

    puts("Enter the value of the resistance"); 
/* In the puts function the newline chracter is automatically added at the end of the string.*/
    return (0);
}