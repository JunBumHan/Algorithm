#include <stdio.h>
#include <string.h>

int arr[51][51][51];

int w(int a, int b, int c)
{

    if(a <= 0 || b <= 0 || c <= 0) 
        return 1;

    if(arr[a][b][c] != 0) return arr[a][b][c];

    if(a > 20 || b > 20 || c > 20) 
        return arr[a][b][c] = w(20, 20, 20);

    if(a < b && b < c)
        return arr[a][b][c] = w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c);
    
    return arr[a][b][c] = w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1);
}



int main(void)
{
    int a, b, c;
    
    while(1)
    {
        scanf("%d %d %d",&a, &b, &c);
        if(a == -1  && b == -1 && c == -1) break;
        else printf("w(%d, %d, %d) = %d\n", a, b, c, w(a, b, c));

    }
}


/*
구글링 참고
음수 값은 맨 처음 if문을 대처 해야하는 것을 생각하지 못함
또한 메모이제이션 이라는 기법을 사용해 한번 탐색한 곳은 탐색 못하게 함으로써
시간을 절약함.
*/