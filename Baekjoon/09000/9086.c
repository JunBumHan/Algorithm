#include <stdio.h>
#include <string.h>

int main(void) 
{
    int t;
    char str[1000];

    scanf("%d", &t);

    while(t--) {
        fgetc(stdin);
        scanf("%s", str);
        printf("%c%c\n", str[0], str[strlen(str) - 1]);
    }
    return 0;
}