#include <stdio.h>

#define MIN 0x80000000

int main(void)
{
    int n, k, x;
    int arr[1000];
    int max = MIN, max_index;

    scanf("%d %d", &n, &k);
    for(int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

    for(int i = 0; i < k; ++i, max = MIN) {
        for(int j = 0; j < n; ++j) {
            if(arr[j] > max)
            {
                max = arr[j];
                max_index = j;
            }
        }
    if(i != k - 1) arr[max_index] = MIN; 
    }

    printf("%d", arr[max_index]);
    return 0; 

}