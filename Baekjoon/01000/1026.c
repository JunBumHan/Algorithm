#include <stdio.h>


int A[101], B[101];

int main(void) {

    int n, temp;;

    scanf("%d", &n);
    
        for(int i = 0; i < n; ++i) {
            scanf("%d", &temp);
            ++A[temp];
        }
        for(int i = 0; i < n; ++i) {
            scanf("%d", &temp);
            ++B[temp];
        }
    

    int res = 0;
    for(int i = 0; i <= 100; ++i) {
        if(A[i] != 0) {
            JUMP:
            --A[i];
            for(int j = 100; j >= 0; --j) {
                if(B[j] != 0) {
                    --B[j];
                    //printf("res(%d) = i(%d) * j(%d) \n", j * i, i, j);
                    res += j * i;
                    break;
                }
            }
            if(A[i] != 0) goto JUMP;

        }
    }
    printf("%d", res);
    return 0;
}
// 2022 11 4 7:50 PM