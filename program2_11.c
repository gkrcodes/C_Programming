/* improved version of the capacitive reactance program*/

#include <stdio.h>
#define PI 3.14159
int main(void)
{
    float freq, cap, X_c;
    puts("Enter frequency and capacitance:");
    scanf("%f %f", &freq, &cap);
    X_c = 1.0/(2.0*PI*freq*cap);
    printf("Capacitive reactance is %6.3f ohms.", X_c);
    return(0);

}