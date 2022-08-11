#include <stdio.h>
#include <string.h>

char charStack[1010];
int stackPointer;
int flag;


void reversePrint(char * str)
{
      int strlen_ = strlen(str);
      for(int i = 0; i <= strlen_; ++i)
      {
            if(str[i] == ' '||str[i] == '\0')
            {
                  if(flag) putchar(' ');
                  for(int i = --stackPointer; i >= 0; --i)
                        printf("%c",charStack[i]);
                  flag = 1;
                  stackPointer = 0;
            }
            else
            {
                  charStack[stackPointer++] = str[i];
            }
      }
      putchar('\n');
}


int main(void)
{
      char str[1010];
      int t;

      scanf("%d",&t);
      while(t--)
      {
            flag = 0;
            fgetc(stdin);
            scanf("%[^\n]s",str);
            //printf("str :  %s\n",str);
            reversePrint(str);
      }
      return 0;
}

