#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool student[31] = {false, };
    int temp;

    for(int i = 1; i <= 28; ++i) {
        scanf("%d", &temp);
        student[temp] = true;
    }

    for(int i = 1; i <= 30; ++i) {
        if(student[i] != true) 
            printf("%d\n", i);
    }
    return 0;
}