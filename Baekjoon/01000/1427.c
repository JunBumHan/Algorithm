#include <stdio.h>
#include <stdlib.h>
#define SWAP(a, b) {int temp = a; a = b; b = temp;}

int compare(const void * a, const void * b) 
{
    int num1 = *(int *) a;
    int num2 = *(int *) b;

    return num2 - num1;
}

int main(void)
{
    int number[100000], cnt = 0;
    char chr;


    while(scanf("%c", &chr) != EOF) {
        number[cnt++] = chr - 48;
    } 
    
    for(int i = cnt - 1; i >= 0; --i) {
        for(int j = 0; j < i; ++j) {
            if(number[j] < number[j+1]) 
                SWAP(number[j] , number[j + 1]);
        }
    }

    for(int i = 0; i < cnt - 1; ++i) 
        printf("%d", number[i]);
    return 0;
}