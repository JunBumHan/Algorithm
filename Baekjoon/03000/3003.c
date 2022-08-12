#include <stdio.h>
int main(void)
{
    int arr[7] = {0 , };
    int minus = 1;
    for(int i = 0; i < 6; ++i) scanf("%d",&arr[i]);
    for(int i = 0; i < 6; ++i) 
    {
        if(i == 2) minus = 2;
        if(i == 5) minus = 8;

        printf("%d ",-arr[i] + minus);
    }

}