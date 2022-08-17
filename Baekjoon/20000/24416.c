#include <stdio.h>

int fibCnt, fibonacciCnt;

int fib(int n) 
{
    if(n == 1 || n == 2) {
        fibCnt++;
        return 1;
    }
    else return fib(n - 1) + fib(n - 2);
}

int fibonacci(int n)
{
    int fibo[41];
    fibo[1] = fibo[2] = 1;
    
        for(int i = 3; i <= n; ++i) {
            fibo[n] = fibo[n-1] + fibo[n-2];
            fibonacciCnt++;
        }

    return fibo[n];
}

int main(void)
{

    int n;
    scanf("%d",&n);

    fib(n), fibonacci(n);

    printf("%d %d", fibCnt, fibonacciCnt);
    return 0;

}