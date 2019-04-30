#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <ctype.h>

int main(){
char caracteres[99];
char caracteres2[99];
printf("Ingrese una cadena:\n");
gets(caracteres);
int posicion=0;
for (char i = 0; i < strlen(caracteres); i++)
{   
    if(isdigit(caracteres[i])){
        caracteres2[posicion]=caracteres[i];
        posicion++;
        
    }
    
}

printf("%s",caracteres2);
}