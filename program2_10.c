#include <stdio.h>
int main(void)
{
    char str1[100], str2[100], str3[100], text[100];
    printf("Enter a line of text >>");
    gets(text);
    printf("Entered line is %s.\n", text);
    printf("Enter a line of text >>");
    scanf("%s %s %s", &str1, &str2, &str3);
    printf("Entered line is %s %s %s.", str1, str2, str3);
    return(0);
}