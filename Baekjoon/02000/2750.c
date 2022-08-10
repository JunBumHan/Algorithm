#include <stdio.h>
#define SWAP(x, y) {int temp = x; x = y; y = temp;}
int main(void)
{
    int t, arr[1000] = {0, };
    scanf("%d",&t);

    for(int i = 0; i < t; ++i) scanf("%d",&arr[i]);
    
    for(int i = t; i >= 0; --i)
    {
        for(int j = 0; j < i-1; ++j)
            {
                if(arr[j] > arr[j+1]) SWAP(arr[j], arr[j+1]);
            }
    }
    for(int i = 0; i < t; ++i) printf("%d\n",arr[i]);
    return 0;

    
}