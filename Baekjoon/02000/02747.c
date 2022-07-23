#include <stdio.h>
/*
  memoization  
  하향식 사용
*/

int dp[46];

int fibonacci(int i)  // i 번 째 피보나치 수를 반환해주는 함수
{
  if(i == 0) return 0;
  if(i == 1) return 1;
  if(dp[i] != 0) return dp[i];
  return dp[i] = fibonacci(i - 1) + fibonacci(i - 2);
}

int main()
{
  int n;
  scanf("%d",&n);
  printf("%d", fibonacci(n));
  return 0;
}