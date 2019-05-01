#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>

int main(){
int num;
printf("Ingrese un numero:\n");
scanf("%d",&num);
int digito;
int multiplicacion=1;
int suma=0;
if (num == 0)
{
    multiplicacion=0;
}

while(num != 0 )
{   
    int digito =  num % 10;
     if (digito % 2 == 0)
     {
         multiplicacion=multiplicacion * digito;
     }else{
         suma=suma + digito;
     }
     num=num/10;
}

printf("La multiplicacion es: %d \nLa Suma es: %d",multiplicacion,suma);

}