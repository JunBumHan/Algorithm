#include <stdio.h>

int prime[10000000];

int main(void)
{
    for(int i = 1; i <= 10000000; ++i) 
        prime[i] = i;

    for(int i = 2; i <= 10000000; ++i) {
        if(prime[i] == 0) continue;
            for(int j = i + i; j <= 10000000; j += i) 
                prime[j] = 0;
    }
 
    unsigned int n;
    scanf("%u", &n);

    while(n != 1) {
        for(int i = 2; i <= 10000000; ++i) {
            if(prime[i] != 0 && n % prime[i] == 0) 
            {
               printf("%d\n", prime[i]);
               n = n / prime[i];
               break; 
            }
        }
    }
    return 0;
}