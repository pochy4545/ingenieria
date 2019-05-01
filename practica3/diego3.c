#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>

int main(){

char cadena[80];
int n;
printf("Ingrese una cadena con menos de 80 de longitud: \n");
gets(cadena);
printf("ingrese un N: \n");
scanf("%d",&n);
int largo=0;
while (cadena[largo]!='\0')
{
    
    largo++;

}
char ult=cadena[largo -1];
for ( int i = 0; i < n; i++)
{
    cadena[largo]=ult;
    largo++;
}
cadena[largo]='\0';
printf("%s",cadena);


}