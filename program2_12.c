/* Program to determine the impedance of a series RL circuit*/

#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(void)
{
    float R, L, freq, X1, Zin_mag, Zin_angle;
    printf("Enter R, L, amd frequency >>>");
    scanf("%f %f %f", &R, &L, &freq);

    X1 = 2* PI * freq * L;
    Zin_mag = sqrt(R*R+X1*X1);
    Zin_angle = atan(X1/R) * 180.0/PI;
    /* atan is arc tan and returns radians*/
    /*180/PI converts the radian into degrees*/

    printf("Zinmag %6.2f ohm, angle %6.2f degrees\n", Zin_mag, Zin_angle);
    return(0);
    

}