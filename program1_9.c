#include<stdio.h>
int main(void)
{
    int x = 14, y = 8;

    printf("The answer 1 is %d. \n", x % y);
    printf("The answer 2 is %d. \n", x % y + 2);
    printf("The answer 3 is %d. \n", x++);
    printf("The answer 4 is %d. \n", --x);
    printf("The answer 5 is %d. \n", x & y);
    printf("The answer 6 is %d. \n", x | y);
    printf("The answer 7 is %d. \n", 4 *(x + y * 2));
    printf("The answer 8 is %d. \n", x << 3);
    printf("The answer 9 is %d. \n", y >> 1);

    return (0);
}