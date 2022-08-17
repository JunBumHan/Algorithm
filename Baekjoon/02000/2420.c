#include <stdio.h>

long long int abs(long long int n)
{
    return n > 0 ? n : n * -1;
}


int main(void)
{
    long long int n, m;

    scanf("%lld %lld",&n, &m);
    printf("%lld",abs(n - m));
    return 0;
}