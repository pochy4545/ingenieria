#include <stdio.h>
#include <stdlib.h>
int main() {
    
    int num;
    int resultado=0;
    //pueden ingresarte numeros con ,
    printf("Introduzca un numero entre 2 y 20:");
    scanf("%d", &num);


    int factorial (int numero)
    {
    int sum=1, i;
    for(i=2; i<=numero; i++)
      {
       sum=sum*i;
      }
    return (sum);
    }


    printf("el resultado es %i", factorial(num));
  }

  