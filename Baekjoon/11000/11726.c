#include <stdio.h>

int dp[1001], n;

int main(void)
{
    dp[1] = 1, dp[2] = 2;
    scanf("%d", &n);

    for(int i = 3; i <= n; ++i) {
        dp[i] = (dp[i - 2] + dp[i - 1]) % 10007;
    }

    printf("%d", dp[n]);
    return 0;
}
