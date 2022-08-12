#include <stdio.h>

int digitSum(int n)
{
    int sum = 0;
    while(n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int isSelfN(int n)
{
    for(int i = 1; i < n; ++i)
    {
        if((digitSum(i) + i) == n) return 0;
    }
    return 1;
}

int main(void)
{   
    for(int i = 1; i <= 10000; ++i)
    {
        if(isSelfN(i)) printf("%d\n",i);
    }
}