#include <stdio.h>

int main(void)
{
    int arr[100][100];
    int n, m, temp;
    
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            scanf("%d", &temp);
            arr[i][j] += temp;
        }
    }

    for(int i = 0; i < n; ++i, printf("\n"))
        for(int j = 0; j < m; ++j) 
            printf("%d ", arr[i][j]);

    return 0;  
}