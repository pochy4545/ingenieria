#include <stdio.h>
#include <stdlib.h>
// Ejemplo aprenderaprogramar.com
int main() {
  int n;
  printf("ingresar n \n");
  scanf("%d",&n);
  for (int fila = 1 ; fila <= n; fila++)
  {
  	for (int cont = 1; cont <= fila; cont++)
     {
  	   printf("%d",cont );
      }
      printf("\n");
  	

  }

    return 0;
}