#include <stdio.h>
#include <stdlib.h>
//libreria que entiende isdigit
#include <ctype.h>

int main(){
char cadena1[99];
char cadena2[99];
printf("Ingrese una cadena de caracteres:\n");
gets(cadena1);
int largo=0;
int posicion=0;
while (cadena1[largo]!='\0')
{
    if(isdigit(cadena1[largo])){
        cadena2[posicion]=cadena1[largo];
        posicion++;
    }
    largo++;
}
cadena2[posicion]='\0';
printf("%s",cadena2);


}