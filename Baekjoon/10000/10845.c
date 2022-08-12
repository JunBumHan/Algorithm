// 링 버퍼 큐 입니다.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 10000

typedef struct {
    int max;    // 큐의 최대 값
    int num;    // 큐의 요소 갯수
    int front;  // Output
    int rear;   // Input
    int *queue; // que의 첫번 째 요소

} Queue;

void Initialize(Queue * que, int max)       // 초기화
{   
    que->max = max; 
    que->front = que->rear = que->num = 0;

    que->queue = calloc(max, sizeof(int));  // 동적 할당
}

void Push(Queue * que, int x)   // push
{
    que->num++;                     // 큐의 요소 갯수 더해주기
    que->queue[que->rear++] = x;    // 큐에 값 대입 
    if(que->rear == que->max)       // 만약 rear 값이 max 값과 같다면 0을 대입 ( 링 버퍼 큐 이기 때문에 )
        que->rear = 0;
}

int Pop(Queue * que, int * x)   // pop
{
    if(que->num <= 0)                       // 만약 요소 갯수가 0보다 같거나 작으면 return -1
        return -1;
    else {
        que->num--;                         // 요소 갯수 감소 
        *x = que->queue[que->front];        // *x에 큐의 맨 앞의 요소를 대입 
        que->front += 1;     
            if(que->front == que->max)      // 만약 front 값이 max 값과 같다면 0을 대입 ( 링 버퍼 큐 이기 떄문에)
                que->front = 0;
        return 1;
    }
}

int Size(Queue * que)   // size
{   
    return que->num;    // num갑 반환해주기
}

int Empty(Queue * que)              // empty
{
    return que->num == 0 ? 1 : 0;   // num 값이 0 이라면 1을 반환 아니라면 0을 반환
}

int Front(Queue * que)                                  // front
{
    return que->num > 0 ? que->queue[que->front] : -1;  // 만약 num 값이 0보다 크다면 큐에 첫 번째 요소 출력
}
    
int Back(Queue * que)                                       //back
{
    return que->num > 0 ? que->queue[que->rear - 1] : -1;   // 만약 num 값이 0보다 크다면 큐의 맨 뒤 요소값 출력 ( rear은 항상 앞서서 가기 떄문에 que->queue[que->rear - 1]을 반환해줌)
}                                                           // 아니면 -1 를 반환

int main(void)
{

    Queue mainQue;
    Initialize(&mainQue, MAX);
    int n;
    char command[BUFSIZ] = {0, };

    

    scanf("%d",&n);
    while(n--)
    {
        fgetc(stdin); 
        scanf("%s",command);

        if(!strcmp(command, "push")) {
            int temp;
            scanf("%d",&temp);

            Push(&mainQue, temp);
        }
        else if(!strcmp(command, "pop")) {
            int temp;
            if((Pop(&mainQue, &temp)) != -1) printf("%d\n", temp);
            else printf("-1\n");
        }
        else if(!strcmp(command, "size"))
            printf("%d\n",Size(&mainQue));

        else if(!strcmp(command, "empty"))
            printf("%d\n",Empty(&mainQue));

        else if(!strcmp(command, "front"))
            printf("%d\n",Front(&mainQue));

        else if(!strcmp(command, "back"))
            printf("%d\n",Back(&mainQue));

        //printf("i : num : %d\n",i,que.num);
        
        // for(int i = 0; i <5; ++i) 
        // {
        //     printf("que[%d] : %d\n",i,mainQue.queue[i]);
        // }
        // printf("front : %d\n",mainQue.front);
    }

    free(mainQue.queue);
    return 0;
}