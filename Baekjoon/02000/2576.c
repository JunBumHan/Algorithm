#include <stdio.h>

int main(void)
{
    int n;
    int sum = 0;
    int min = 0x08000000;

    for(int i = 0; i < 7; ++i) {
        scanf("%d", &n);
        if(n % 2) {
            sum += n;
            if(min > n) 
                min = n;
        }
    }
    if(sum == 0)    
        puts("-1");
    else 
    {
        printf("%d\n", sum);
        printf("%d", min);
    }
    return 0;
}