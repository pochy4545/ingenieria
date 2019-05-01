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
    //si no puden usar is digit seria asi
   /* switch (cadena1[largo])
    {
        case '0':cadena2[posicion]=cadena1[largo];
        break;
        case '1':cadena2[posicion]=cadena1[largo];
        break;
        case '2':cadena2[posicion]=cadena1[largo];
        break;
        case '3':cadena2[posicion]=cadena1[largo];
        break;
        case '4':cadena2[posicion]=cadena1[largo];
        break;
        case '5':cadena2[posicion]=cadena1[largo];
        break;
        case '6':cadena2[posicion]=cadena1[largo];
        break;
        case '7':cadena2[posicion]=cadena1[largo];
        break;
        case '8':cadena2[posicion]=cadena1[largo];
        break;
        case '9':cadena2[posicion]=cadena1[largo];
        break;
    default:
        break;
    }
    posicion++;
   */
    
}
cadena2[posicion]='\0';
printf("%s",cadena2);


}