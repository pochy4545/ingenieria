#include <stdio.h>
#include <stdlib.h>
// Ejemplo aprenderaprogramar.com
int main() {
    int n;
    int sp=0;
    int pi=1;
    int a;
    printf("escribir n \n" );
    scanf("%d",&n );
    do
    {
      printf("ingrese a\n");
      scanf("%d",&a);
      if (a % 2==0)
      {
        sp= sp+a;
      }else{pi=pi*a;

      }
      n=n-1;
    } while (n != 0);
    printf("los nuros son:%d,%d",sp,pi);
    return 0;
} 