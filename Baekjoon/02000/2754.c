#include <stdio.h>
#include <string.h>

int main(void) 
{
    int a;
    char str[3];
    scanf("%s", str);

    if(!strcmp(str, "A+")) puts("4.3");
    else if(!strcmp(str, "A0")) puts("4.0");
    else if(!strcmp(str, "A-")) puts("3.7");
    else if(!strcmp(str, "B+")) puts("3.3");
    else if(!strcmp(str, "B0")) puts("3.0");
    else if(!strcmp(str, "B-")) puts("2.7");
    else if(!strcmp(str, "C+")) puts("2.3");
    else if(!strcmp(str, "C0")) puts("2.0");
    else if(!strcmp(str, "C-")) puts("1.7");
    else if(!strcmp(str, "D+")) puts("1.3");
    else if(!strcmp(str, "D0")) puts("1.0");
    else if(!strcmp(str, "D-")) puts("0.7");
    else puts("0.0");

    return 0;
}