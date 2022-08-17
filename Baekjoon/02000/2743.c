#include <stdio.h>

int strlen(char * str)
{
    int sum = 0;
    for(int i = 0; str[i] != '\0'; ++i) sum++;
    return sum;
}

int main(void)
{
    char str[101];
    scanf("%s", str);
    printf("%d", strlen(str));
}