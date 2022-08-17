#include <stdio.h>

int arr[101], cnt;

int main(void)
{
    int n, temp;
    scanf("%d", &n);
    
    for(int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &temp);

    for(int i = 0; i < n; ++i) {
        if(arr[i] == temp) cnt++;
    }

    printf("%d", cnt);
    return 0;
}