#include <stdio.h>

int main(void)
{
    int n, k, cnt = 0;
    int money[10];
    scanf("%d %d", &n, &k);

    for(int i = 0; i < n; ++i) 
        scanf("%d", &money[i]);

    for(int i = n - 1; i >= 0; --i) {
        cnt += k / money[i];
        k = k % money[i];
    }
    printf("%d", cnt);
    return 0;
}