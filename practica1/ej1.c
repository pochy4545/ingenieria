#include <stdio.h>
#include <stdlib.h>
// Ejemplo aprenderaprogramar.com
int main() {
    int num1;
    int num2;
    int num3;
    int masgrade;
    printf("Introduzca 1 numero entero: ");
    scanf("%d", &num1);
    printf("Introduzca 2 numero entero: ");
    scanf("%d", &num2);
    printf("Introduzca 3 numero entero: ");
    scanf("%d", &num3);

    if ((num1 > num2) && (num1 > num3))
    {
      masgrade = num1;
    }
    else{ 
      if ((num2 > num1) && (num2 > num3))
      {
    		masgrade = num2;
      }else{
      	   masgrade = num3;
      }
    }

    printf("el numero mas grande %i",masgrade);
    
}