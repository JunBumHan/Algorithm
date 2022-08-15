#include <stdio.h>
#define MAX 1002

int plate[1002][1002];
int result[1002];

int main(void)
{
    
    int n;  // 1 <= n <= 100
    int x, y, w, h, cnt = 1;

    scanf("%d",&n);
    for(int i = 0; i < n; ++i) {
        scanf("%d %d %d %d",&x, &y, &w, &h);
        for(int j = x; j < x + w; ++j) {
            for(int k = y; k < y + h; ++k) {
                plate[j][k] = cnt;
            }
        }
        cnt++;
    }
       
    for(int i = 0; i < MAX; ++i) {
        for(int j = 0; j < MAX; ++j) {
            result[plate[i][j]]++;
        }
    }

    for(int i = 1; i <= n; ++i)
        printf("%d\n",result[i]);
    
    return 0;
}