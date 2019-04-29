#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
int blancos=0;
int vocales=0;
int digitos=0;
int consonantes=0;
char caracteres[100];
char c;
gets(caracteres);
printf("La  longitud es %d \n", (int)strlen(caracteres));
//como usar rangos y despues tambien como pasar a upercase asi no comparamos por mayuscula y minusculas
for (int i = 0; i < strlen(caracteres); i++)
{
   c = caracteres[i];

   if(c == ' ' ){
       blancos++;
   }else{
       if((c=='0')||(c=='1')||(c=='2')||(c=='3')||(c=='4')||(c=='5')||(c=='6')||(c=='7')||(c=='8')||(c=='9')){
          digitos++;
       }

       else{
       if ((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='u'))
       {
           vocales++;
       }else{
           consonantes++;
       }
       
       
   }
}
}
printf("La cantidad de blancos es : %d \n",blancos);
printf("La cantidad de vocales es: %d \n",vocales);
printf("La cantidad de Consonantes son: %d \n",consonantes);
printf("La cantidad de digitos es: %d \n",digitos);
}