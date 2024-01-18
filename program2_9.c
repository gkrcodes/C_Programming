#include <stdio.h>
int main(void)
{
    float val1, val2, val3, val4;
    int i, j, k;

    printf("\nType in two float values followed by <RETURN> >>");
    scanf("%f %f", &val1, &val2);
    printf("Type in two integer values followed by <RETURN> >>");
    scanf("%d %d", &i, &j);
    printf("Type in an integer and two floats followed by <RETURN> >>");
    scanf("%d %f %f", &k, &val3, &val4);
    printf("floats entered were %6.2f, %6.2f, %6.2f and %6.2f\n", val1, val2, val3, val4);
    printf("The integers enetered were %6d, %6d and %6d\n", i, j, k);
    return(0);

}