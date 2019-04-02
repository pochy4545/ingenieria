#include <stdio.h>
#include <stdlib.h>
// Ejemplo aprenderaprogramar.com
int main() {
    int num1;
    int mayor=-9999;
    for (int i = 1; i < 11; ++i)
    {
    printf("Introduzca %i numero entero: ",i);
    scanf("%d", &num1);

    if (num1 > mayor)
    {
      mayor=num1;
    }

    }

    printf("El mayor es %i",mayor);
}