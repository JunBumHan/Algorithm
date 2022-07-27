#include <stdio.h>
#include <string.h>

int main(void)
{
    int n_[15] = {0, }; // 기본 값 0층 

    int n;  // 호
    int k;  // 층 
    int t;

    scanf("%d",&t);
    
    while(t--)
    {
        for(int i = 0 ; i < 15; ++i) n_[i] = i+1;   // 0층으로 초기값 설정

        scanf("%d %d",&k, &n);

        for(int i = 0; i < k; ++i)          // 0 ~ k-1 층 까지 
            for(int j = 1; j < 14; ++j)     // 1층 ~ 14-1 층 까지 (0 index 의 값은 모두다 1로 통일 되므로 건들지 않음.)
                n_[j] = n_[j-1] + n_[j];    // 현재 인덱스는의 값은 = 전 인덱스 값 + 현재 인덱스 값 
        printf("%d\n",n_[n-1]);             // 호 출력  
    }

    return 0;
    //for(int i = 0; i < 15; ++i) printf("n_[%d] : %d\n",i,n_[i]);
    
}


/*
재귀함수 풀이


#include <stdio.h>

int getNum(int k, int n)
{
    if( n == 1 ) return 1;
    if( k == 0 ) return n;

    return (getNum(k-1, n) + getNum(k, n-1));
}

int main()
{
    int t,k,n;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&k,&n);
        printf("%d\n",getNum(k,n));
    }
}


*/