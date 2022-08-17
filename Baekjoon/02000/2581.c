#include <stdio.h>
#include <stdbool.h>

int main(void) 
{
    int n, m, j, flag = 0;
    int sum = 0;
    bool prime[10001] = {false, };

    for(int i = 1; i <= 10000; ++i) {
        for(j = 2; j < i; ++j) {
            if(i % j == 0) break;
        }
        if(j == i) prime[i] = true; 
    }

    scanf("%d %d", &m, &n);

    

    for(int i = m; i <= n; ++i) {
        if(prime[i]) sum += i;
    }

    if(sum != 0) printf("%d",sum);
    else printf("-1");

    for(int i = m; i <= n; ++i)  {
        if(prime[i] == true) {
            printf("\n%d",i);
            break;
        }    
    }
}   