#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10010

typedef struct {
    int stackMax; // 스택 최대 크기
    int stackPointer;  // 스택 포인터
    int *basePointer;  // 베이스 포인터
} Stack;

void Initialize(Stack *stack, int max)
{
    stack->stackPointer = 0;
    stack->basePointer = calloc(max, sizeof(int));
    stack->stackMax = max;
}

void Push(Stack *stack, int x)
{
    stack->basePointer[stack->stackPointer++] = x;
}

int Pop(Stack *stack)
{   
    return stack->stackPointer > 0 ? stack->basePointer[--stack->stackPointer] : -1;
}

int Size(Stack *stack)
{
    return stack->stackPointer;
}

int Empty(Stack * stack)
{
    return stack->stackPointer <= 0 ? 1 : 0; 
}

int Top(Stack * stack)
{
    return stack->stackPointer > 0 ? stack->basePointer[stack->stackPointer - 1] : -1;
}

int main(void)
{
    Stack stack;
    char command[BUFSIZ];
    int n;

    Initialize(&stack, MAX); // stack 생성

    scanf("%d",&n);

    for(int i = 0; i < n; ++i)
    {
        fgetc(stdin); 
        scanf("%s",command);

        if(!strcmp(command, "push")) {
            int temp;
            scanf("%d",&temp);

            Push(&stack, temp);
        }

        else if(!strcmp(command, "pop")) 
            printf("%d\n",Pop(&stack));
        
        else if(!strcmp(command, "size")) 
            printf("%d\n",Size(&stack));
        
        else if(!strcmp(command, "empty")) 
                printf("%d\n",Empty(&stack));

        else printf("%d\n",Top(&stack));
    }
    free(stack.basePointer);
    return 0;
}