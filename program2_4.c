/* precision specifications for printing the numerical values.*/
#include <stdio.h>
int main(void)
{
    float x = 31.43523;
    int i = 143;

    printf("Value of x is <%f> <%8.2f> <%.3f>.\n", x,x,x);
    printf("Value of i is  <%d> <%10d>.\n", i,i);
}