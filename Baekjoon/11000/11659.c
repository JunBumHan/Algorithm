#include <stdio.h>

int main(void)
{
    int n, m, I, J, arr[100010] = {0, }, cumulative[100001] = {0, };

    scanf("%d %d", &n, &m);
    for(int i = 1; i <= n; ++i)
        scanf("%d", &arr[i]);
        
    cumulative[1] = arr[1];
    for(int i = 2; i <= n; ++i) 
        cumulative[i] = arr[i] + cumulative[i - 1];
    
    for(int i = 0; i < m; ++i) {
        scanf("%d %d", &I, &J);
        printf("%d\n", cumulative[J] - cumulative[I - 1]);
    }
    return 0;
}


/*
누적 합 이란
식의 형태로 누적의 합을 구하는 것을 말한다.
어떤 식을 말하는 것일 까?
int arr[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
이러한 배열이 있을 때 또 다른 배열을 생성한다.
int arr_[11];
이 값은 arr_[i] = arr[i + 1] + arr[i - 1] 이러 한 식으로 나타내면
              {0, 1, 3, 6, 10, 15, 21, 28, 36, 45} 
              이러한 값이 나오게 된다.
3 index 의 값을 살펴보면 arr[1] + arr[2] + arr[3] 과 값이 같다. 
맞다 1 ~ index 까지의 합을 저장해 놓은 배열이다. 
이것을 이용해 식을 세우자면
arr[3] ~ arr[5] 까지의 누적합을 구하고 싶으면 
s = 3, e = 5
arr[3] ~ arr[5] = arr_[e] - arr_[s- 1] 이렇게 식만 써주면 바로 누적합을 구할 수 있다.
이게 바로 누적 합이다.

*/