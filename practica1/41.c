#include <stdio.h>
#include <stdlib.h>
// Ejemplo aprenderaprogramar.com
int main() {
  int x;
  int z=0;
  int c=0;
   printf("ingrese un numero natural \n");
   scanf("%d",&x);
   while(c != x){
    z=z+x;
    c++;

   }
    printf("escribir %d", z);
    return 0;
}