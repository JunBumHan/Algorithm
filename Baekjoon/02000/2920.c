#include <stdio.h>

int main(){
  int cntUp = 1, cntDown = 8;
  int input;

  for(int i = 0; i < 8; ++i)
  {
      scanf("%d",&input);
      if(cntUp == input) cntUp++;
      if(cntDown == input) cntDown--;
  }
  if(cntUp == 9) printf("ascending");
  else if(cntDown == 0) printf("descending");
  else printf("mixed");
  return 0;
}