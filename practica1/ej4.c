#include <stdio.h>
#include <stdlib.h>
// Ejemplo aprenderaprogramar.com
int main() {
    
    int num;
    int count=0;
    int total=0;

    printf("Introduzca un numero distinto de cero:");
    scanf("%d", &num);

    while(num != 0){
      count=count+1;
      total=total+num;
      printf("ingrese otro numero o (0) para terminar:");
      scanf("%d",&num);

    }
    printf("El total es: %i",total);
    printf("La cantidad es: %i",count);
    float resultado;
    resultado = (float)total/(float)count;
    printf("El promedio es: %f",resultado);
}