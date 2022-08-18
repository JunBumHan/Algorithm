#include <stdio.h>

int arr[1000001];

int main(void)
{

    // 에라토스테네스의 체
    // 배수를 배제함으로써 소수만 남기는 알고리즘
    for(int i = 1; i <= 1000000; ++i) 
        arr[i] = i;
    
    for(int i = 2; i <= 1000000; ++i) {
        if(arr[i] == 0) continue;
            for(int j = i + i; j <= 1000000; j += i) 
                arr[j] = 0;
    }
    arr[1] = 0; // 1은 소수가 아님.
    // 소인수 분해 할 때 무한한 1로 표현이 가능하기 때문에
    // 유일성에 위배되므로 1은 소수가 아니다.

    int n, m;

    scanf("%d %d", &m, &n);

    for(int i = m; i <= n; ++i) {
        if(arr[i] != 0) 
            printf("%d\n", arr[i]);
    }

    return 0;
}