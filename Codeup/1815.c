#include <stdio.h>

//void f(n)을 n개의 별을 출력하는 함수

void f(int n)
{
    if(n == 0) return;
    f(n-1);
    printf("*");
}


int main()
{
    int n;

    scanf("%d",&n);
    f(n);

    return 0;

}
