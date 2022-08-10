//브루트 포스 문제
#include <stdio.h>

int digitSum(int digits)
{
    int digitSum = 0;

    while(digits != 0)
    {
        digitSum += digits % 10;
        digits /= 10;
    }

    return digitSum;
}

int main(void)
{
    int n;
    int i;

    scanf("%d",&n);
    for(i = 1; i <= n; ++i)
    {
       if(n == i + digitSum(i) ) 
       {
           printf("%d",i);
           return 0;
       }
    }
    printf("0");
    return 0;
}
