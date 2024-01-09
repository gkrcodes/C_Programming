/*Calculate capacitive reactance*/

#include <stdio.h>
#define PI 3.14159

int main(void)
{
    float freq, cap, X_c;

    freq = 10.0e3;
    cap = 1.0e-6;
    X_c = 1/(2.0 * PI * freq * cap);
    /*print freq with 3 decimal places in exponent format*/
    /*print cap with 2 decimal places in exponent format*/
    /*print X_c as a floating point format with 3 decimal */

    printf("Frequency %.3e Hz, capacitance %.2e.\n", freq, cap);
    printf("Capacitive reactance is %.3f ohms.\n", X_c);
    return (0);
}