#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>

int main(){

char cadena[99];
int n;
  
 printf("Ingrese una cadena no mayor que 99:\n");
gets(cadena);
printf("Ingrese un numero entero");
scanf("%d",&n);

int largo=0;
while(cadena[largo]!='\0'){
largo++;
}
char ultimo= cadena[largo-1];

for(int i=0; i<n; i++)
{

cadena[largo]=ultimo;
largo++:
}



}