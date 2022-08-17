#include <stdio.h>

int main(void)
{
    char chr;
    while(scanf("%c", &chr) != EOF) {
        printf("%c", chr);
    }
    return 0;
} 