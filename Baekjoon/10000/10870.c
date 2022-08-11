#include <stdio.h>
int main(void)
{
    int fibo[20] = {0, }, n;
    fibo[0] = 0, fibo[1] = 1;

    scanf("%d",&n);

    for(int i = 2; i <= n; ++i)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
        //printf("fibo[%d] : %d\n",i,fibo[i]);
    }
    printf("%d",fibo[n]);
    return 0;

}