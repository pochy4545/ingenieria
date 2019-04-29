#include <stdio.h>
#include <stdlib.h>

int main(){

int num[10];
 int ni;
 float total=0;
int mayor,menor; 
for ( int i = 0; i < 10; i++)
{    
    printf ("Ingrese el numero %d :", i+1);
    scanf("%d",&ni);
    num[i]=ni;


}
mayor=num[0];
menor=num[0];
for (int i = 0; i < 10; i++)
{
printf("El numero ingresado en la posicion %d es: %d \n",i, num[i]);
total = total + num[i];
if (mayor < num[i])
{
mayor=num[i];
}
if (menor> num[i])
{
menor=num[i];
}

}
printf("EL total es %f:\n", (float)(total/10));
printf( "El mayor de los numeros es : %d\n", mayor);
printf( "El menor de los numeros es : %d", menor);
}