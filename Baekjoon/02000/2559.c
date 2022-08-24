#include <stdio.h>

int arr[10000010];
int accumulate[1000100];
int accumulateVar;

int main(void) 
{
    int N, K, max = 0x80000000;
    scanf("%d %d", &N, &K);

    for(int i = 2; i <= N + 1; ++i) 
        scanf("%d", &arr[i]);

    for(int i = 1; i <= N; ++i) 
        accumulate[i] = arr[i + 1] + accumulate[i - 1];
    /*
    index 0 1 2 3 4 5 6 7 8
      arr 0 0 5 4 3 2 1 4 3 2 1 
      acc 0 
        acc[1] = arr[1 + 1] + acc[1 - 1];
    */
    
    for(int s = 1, e = K;; ++s, ++e) {
        if(e == N + 1) break;   
        //printf("%d ", accumulate[e] - accumulate[s - 1]);
        if(max < (accumulateVar = accumulate[e] - accumulate[s - 1]))
            max = accumulateVar;
    }
    printf("%d", max);
    return 0;
}