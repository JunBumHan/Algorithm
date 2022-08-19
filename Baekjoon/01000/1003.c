#include <stdio.h>

void fibo(int n)
{
    int oneCnt[41], zeroCnt[41]; 
    oneCnt[2] = 1, zeroCnt[2] = 1;
    oneCnt[3] = 2, zeroCnt[3] = 1; 
    if(n == 0) 
        printf("1 0\n");
    else if(n == 1) 
        printf("0 1\n");
    else 
    {
        for(int i = 4; i <= n; ++i) {
            oneCnt[i] = oneCnt[i - 1] + oneCnt[i - 2];
            zeroCnt[i] = zeroCnt[i - 1] + zeroCnt[i - 2]; 
        }
        printf("%d %d\n", zeroCnt[n], oneCnt[n]);
        return;
    }
}

int main(void)
{
    int t, n; 
    scanf("%d", &t);

    for(int i = 0; i < t; ++i) {
        scanf("%d", &n);
        fibo(n);
    }
    return 0;
}