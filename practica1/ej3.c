#include <stdio.h>
#include <stdlib.h>
// Ejemplo aprenderaprogramar.com
int main() {
    int num1;
    int mayor=-9999;
    int limite;

    printf("Introduzca la canridad");
    scanf("%d", &limite);

    for (int i = 1; i <= limite; ++i)
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