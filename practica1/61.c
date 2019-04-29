#include <stdio.h>
#include <stdlib.h>
// Ejemplo aprenderaprogramar.com
int main() {
  float x;
  float y;
  int n;
  int i;
  scanf("%f %d", &x, &n);
    y=1;
    for (int i =1 ; i <= n; i++)
    {
      y=y*x; 
    }

    if (n<0)
    {
      y=1/y;
    }
    printf("%f \n",y);
  return 0;
}