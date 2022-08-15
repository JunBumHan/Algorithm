// 2022 8 15 PM 11:02 풀었다 TLqkf!!!~~~~
#include <stdio.h>

int land[1000][1000];  // starting index : 1, 1
int land_[1000][1000]; // 복사본
int result[300];       // 0 ~ 256 까지의 시간
int n, m, b, bSave;

int checkTime(int blockHeight)
{
    // intSum, b, land값을 왼래대로 초기화
    int timeSum = 0;
    b = bSave;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            land[i][j] = land_[i][j];
        }
    }

    // printf("block 높이 : %d\n",blockHeight);
    // printf("block 갯수 : %d\n", b);
    for(int i = 1; i <= n; ++i) {   // 블럭 제거 및 판단
        for(int j = 1; j <= m; ++j) {
            if(land[i][j] > blockHeight) { // 블럭 제거 1번 작업
                b += land[i][j] - blockHeight;
                timeSum += (land[i][j] - blockHeight) * 2;
                land[i][j] = blockHeight;
                //printf("land[%d][%d] => timeSum += (%d - %d) * 2 : %d\n",i, j,land[i][j],blockHeight,(land[i][j] - blockHeight)*2);
            }             
        }
    }

    for(int i = 1; i <= n; ++i) {   // 블럭 생성 ( 왜 블럭 제거를 한 뒤 부족한 블럭을 최대한 많이 모아주기 위해서 )
        for(int j = 1; j <= m; ++j) {
            if(land[i][j] < blockHeight) {
                b -= blockHeight - land[i][j];
                if(b < 0) return -1;
                timeSum += blockHeight - land[i][j];
                //printf("land[%d][%d] => timeSum += %d - %d : %d\n",i, j,blockHeight,land[i][j],(blockHeight - land[i][j]));
            }
        }             
    }   
    
    return timeSum; // 시간 반환
}

int main()
{
    int max = 2147483647, max_index = 0;
   
    scanf("%d %d %d", &n, &m, &b);
    bSave = b;

    for(int i = 1; i <= n; ++i) // land값 복사하기
        for(int j = 1; j <= m; ++j) {
            scanf("%d",&land[i][j]);
            land_[i][j] = land[i][j];
        }


    //printf("\n result : %d",checkTime(63));
    for(int i = 256; i >= 0; --i) {                     // 모든 경우의 수 ( 브루트포스 알고리즘 )
        if(max > checkTime(i) && checkTime(i) != -1) {
            max = checkTime(i);
            max_index = i;
        }
    }

    printf("%d %d",checkTime(max_index), max_index); // 출력
    return 0;
}
