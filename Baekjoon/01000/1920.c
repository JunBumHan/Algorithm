#include <stdio.h>
#include <stdlib.h>

int compare(const void * a, const void *b)
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if(num1 < num2) 
        return -1;

    if(num1 > num2)
        return 1;

    return 0;
}


int binSearch(int *arr, int key, int size) // key 값이 있으면 1 : 없으면 0
{
    int start = 0 , end = size - 1, mid;

    do {

        mid = (start + end) / 2; // overflow 방지 
        // printf("start : %d | mid : %d | end : %d\n",start, mid, end);

        if(arr[mid] == key) 
            return 1;
        {
            if(key > arr[mid])
                start = mid + 1;
            
            else end = mid - 1;
        }
        
    } while(start <= end);

    return 0;
}

int n, m[100000], a, temp;

int main(void)
{

    scanf("%d",&n);

    for(int i = 0; i < n; ++i) 
        scanf("%d", &m[i]);

    qsort(m, n, sizeof(int), compare);

    // for(int i = 0; i < n; ++i) printf("%d ",m[i]);

    scanf("%d", &a);
    for(int i = 0; i < a; ++i) {
    
        scanf("%d", &temp);
        printf("%d\n",binSearch(m, temp, n));

    }   
    return 0;
}