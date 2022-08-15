#include <stdio.h>

// greatest common divisor
int gcd(int a, int b) // ( a != b && a > b ) (output : gcd (a,b))
{
  int temp;

  while (b != 0) {
    temp = a % b;
    a = b;
    b = temp;
  }

  return a;
}

int main(void) 
{ 
    int t, a, b, temp;
    scanf("%d",&t);

    for(int i = 0; i < t; ++i) {
        scanf("%d %d",&a,&b);
        if(a == b) printf("%d\n",a);
        else if(a < b) {
            temp = a; 
            a = b;
            b = temp;
            printf("%d\n",a * b / gcd(a,b));    
        }
        else printf("%d\n",a*b/gcd(a, b));
    }
    return 0;   
}

