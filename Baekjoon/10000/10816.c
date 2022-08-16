#include <stdio.h>

int positiveIntegerArr[10000010], negativeIntegerArr[10000010], n, m, temp;

int main(void) 
{
    scanf("%d",&n);
    for(int i = 0; i < n; ++i) {
        scanf("%d",&temp);
        if(temp < 0) 
            negativeIntegerArr[temp * -1]++;
        else
            positiveIntegerArr[temp]++;
    }   

    scanf("%d",&m);
    for(int i = 0; i < m; ++i) {
        scanf(" %d",&temp);
        //printf("input : ");
        if(temp < 0)
            printf("%d ", negativeIntegerArr[temp * -1]);
        else
            printf("%d ",positiveIntegerArr[temp]);
        //puts(" ");
    }
    return 0;
}