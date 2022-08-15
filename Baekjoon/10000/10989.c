// 계수 정렬
#include <stdio.h>

int arr[10000];

int main(void) 
{
    int t, input;
    scanf("%d",&t);

    for(int i = 0; i < t; ++i) { 
        scanf(" %d",&input);
        arr[input - 1]++;
    }

    for(int i = 0; i < 10000; ++i) {
        if(arr[i] != 0) {
            for(int j = 0; j < arr[i]; ++j) {
                printf("%d\n",i+1);
            }
        }
    }
}