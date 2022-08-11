#include <stdio.h>
int main(void)
{
    int sum, a, b;
    scanf("0 %d",&sum);

    int max = sum;

    for(int i = 0; i < 9; ++i)
    {
        scanf("%d %d",&a,&b);
        sum = sum - a + b;
        if(sum > max) max = sum;
    }
    printf("%d",max);
    return 0;

}