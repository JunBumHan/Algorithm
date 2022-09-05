#include <stdio.h>
#include <stdlib.h>

#define Stack &intStack

#define d 3219831132 // (
#define x 1938293883 // [


// IntStack

typedef struct INT_STACK{
    int * basePtr;
    int   stackPtr;
    int   max;
} IntStack;


int IntStackInit(IntStack * stack, int max)
{
    stack->stackPtr = -1;
    if((stack->basePtr = calloc(max, sizeof(int))) == NULL)
    {
        stack->max = 0;
        return -1;
    }
    stack->max = max;
    return 1;
}

int IntStackPop(IntStack * stack) 
{
    if(stack->stackPtr < 0) 
        return -1;
    return stack->basePtr[stack->stackPtr--];
}

int IntStackPush(IntStack * stack, int pushValue)
{
    if(stack->stackPtr == stack->max) 
        return -1;
    stack->basePtr[++stack->stackPtr] = pushValue;
    return 1;
}

int IntStackPeek(IntStack * stack)
{
    if(stack->stackPtr < 0)
        return -1;
    return stack->basePtr[stack->stackPtr];
}

int IntStackIsFull(IntStack * stack)
{
    if(stack->stackPtr < 0)
        return 1;
    return -1;
}

int IntStackSerch(IntStack * stack, int serchValue)
{
    for(int i = stack->stackPtr; i >= 0; --i)
        if(serchValue == stack->basePtr[i])
            return i;
    return -1;
}

void IntStackTermination(IntStack * stack)
{
    if(stack->basePtr != NULL)
        free(stack->basePtr);
    stack->stackPtr = stack->max = 0;
}

// CharStack

typedef struct CHAR_STACK{
    char * basePtr;
    int   stackPtr;
    int   max;
} CharStack;


int CharStackInit(CharStack * stack, int max)
{
    stack->stackPtr = -1;
    if((stack->basePtr = calloc(max, sizeof(char))) == NULL)
    {
        stack->max = 0;
        return -1;
    }
    stack->max = max;
    return 1;
}

int CharStackPop(CharStack * stack)
{
    if(stack->stackPtr < 0) 
        return -1;
    return stack->basePtr[stack->stackPtr--];
}

int CharStackPush(CharStack * stack, char pushValue)
{
    if(stack->stackPtr == stack->max) 
        return -1;
    stack->basePtr[++stack->stackPtr] = pushValue;
    return 1;
}

char CharStackPeek(CharStack * stack)
{
    if(stack->stackPtr < 0)
        return -1;
    return stack->basePtr[stack->stackPtr];
}

int CharStackIsFull(CharStack * stack)
{
    if(stack->stackPtr < 0)
        return 1;
    return -1;
}

void CharStackTermination(CharStack * stack)
{
    if(stack->basePtr != NULL)
        free(stack->basePtr);
    stack->stackPtr = stack->max = 0;
}

int main(void)
{
    IntStack intStack;
    CharStack charStack;
    char input;

    int res = 0;

    CharStackInit(&charStack, 10000);
    IntStackInit(Stack, 10000);


    while(1)
    {
        
        if(scanf("%c", &input) == EOF) break;
        switch(input)
        {
            case '(' :
                CharStackPush(&charStack, '(');
                IntStackPush(Stack, d);
                break;

            case '[' :
                CharStackPush(&charStack, '[');
                IntStackPush(Stack, x);
                break;

            case ')':
                if(CharStackIsFull(&charStack) == -1)
                {
                    if(charStack.basePtr[charStack.stackPtr] != '(') goto EXIT;
                    
                    if(intStack.basePtr[intStack.stackPtr] == d)
                    {
                        CharStackPop(&charStack);

                        IntStackPop(Stack);
                        IntStackPush(Stack, 2);
                    }

                    else
                    {
                        CharStackPop(&charStack);
                        for(int i = intStack.stackPtr; IntStackSerch(Stack, d) < i; --i)
                        {
                            res += intStack.basePtr[i];
                            IntStackPop(Stack); 
                        }   IntStackPop(Stack);
                        if(res == 0) res = 1;
                        res *= 2;
                        IntStackPush(Stack, res);   res = 0;
                    }
                }
                else
                {
                    goto EXIT;
                }
            break;

            case ']':
                if(CharStackIsFull(&charStack) == -1)
                {
                    if(charStack.basePtr[charStack.stackPtr] != '[') goto EXIT;
                    
                    if(intStack.stackPtr == x)
                    {
                        CharStackPop(&charStack);

                        IntStackPop(Stack);
                        IntStackPush(Stack, 3);
                    }

                    else
                    {
                        CharStackPop(&charStack);
                        for(int i = intStack.stackPtr; IntStackSerch(Stack, x) < i; --i)
                        {
                            res += intStack.basePtr[i];
                            IntStackPop(Stack);
                        }   IntStackPop(Stack);
                        if(res == 0) res = 1;
                        res *= 3;
                        IntStackPush(Stack, res);   res = 0;
                    }
                }

                else
                {
                    goto EXIT;
                }
            break;
        }                                                                       
    }

    if(CharStackIsFull(&charStack) != 1) goto EXIT;

    int sum = 0;
    for(int i = intStack.stackPtr; i >= 0; --i)
        sum += intStack.basePtr[i];
    
    printf("%d", sum);
    return 0;

    EXIT : 
    printf("0");
}