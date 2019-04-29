#include <stdio.h>
#include <stdlib.h>
// Ejemplo aprenderaprogramar.com
int main() {
  int SUMA=0;
  int l=0;
  while(!(l>100)){
    SUMA= SUMA + (2*l+1);
    l++;

  }
  printf("La suma es %d \n",SUMA);
  return 0;

}