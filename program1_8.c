#include <stdio.h>
int main()
{
    printf(" The answer 1 is %d. \n", 5*3);
    printf(" The answer 2 is %d. \n", 21 % 4 % 2 *3 +2);
    printf(" The answer 3 is %d. \n", 25 + 5 % 2 * 4 -1);
    printf(" The answer 4 is %d. \n", 3 * 3 * 7 % 2);
    printf(" The answer 5 is %d. \n", (7 + 4) % 4 * 2);
    printf(" The answer 6 is %d. \n", 25 % 3);

    printf(" The answer 1 is %d. \n", 0x32 + 011);
    printf(" The answer 2 is %d. \n", 0x31 & 044);
    printf(" The answer 3 is %d. \n", 0x4B | 013);
    printf(" The answer 4 is %d. \n", 011 * 0x31);
    printf(" The answer 5 is %d. \n", ~32);
    printf(" The answer 6 is %d. \n", 0xAA - 055);
    printf(" The answer 4 is %d. \n", 0xFF + 0x10);
    printf(" The answer 5 is %d. \n", !(0xCF));
    printf(" The answer 6 is %d.", ~(032));
    return (0);

}