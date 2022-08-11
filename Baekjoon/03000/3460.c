#include <stdio.h>


void printBin(unsigned int x)
{
    int bin[32] = {0, };
    unsigned int min = 0x80000000;
    for(int i = 31; i >= 0; --i)
    {
        if((min & x) == min) bin[i] = 1;
        min >>= 1;
    }

    for(int i = 0; i < 32; ++i)
    {
        if(bin[i] == 1) printf("%d ",i);
    }
}


int main(void)
{
    int t;
    int value;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&value);
        printBin(value);
    }
    return 0;
}