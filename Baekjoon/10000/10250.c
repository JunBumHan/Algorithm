#include <stdio.h>
int main(void)
{
    int t, h, w, n;
    scanf("%d",&t);

    for(int i = 0; i < t; ++i) {
        scanf("%d %d %d",&h,&w,&n);
        if(n % h == 0) printf("%d%02d\n", h, n / h); // h 가 n 의 배수 일 떄 밑에 공식으로는 풀수 없기 떄문에 조건을 걸어 주어야 함.
        else printf("%d%02d\n", n % h, n / h + 1);
    }
}

/*
반복문 풀이
#include <stdio.h>

int main(void)
{
    int t, h, w, n;
    int wCount = 1, hCount = 0;

    scanf("%d",&t);

    for(int i = 0; i < t; ++i) {
        scanf("%d %d %d", &h, &w, &n);
        wCount = 1, hCount = 0;
        for(int i = 0; i < n; ++i) {
            if(hCount == h) {
                hCount = 1;
                wCount++;
            }
            else hCount++;
        }
        printf("%d%02d\n",hCount, wCount);
    }
    
    return 0;
}
*/