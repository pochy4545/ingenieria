#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

float mes[2][24];
float temp;
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 24; j++)
    {
        printf("Ingrese la temperatua de las %d hs del dia %d \n",j,i);
        scanf("%f",&temp);
        mes[i][j]=temp;
    }
    
}


float mayor= mes[0][0];
int dia=0;
int hora=0;
float cant=0;
int promedio=0;
int diamayor=0;
printf("................HORAS DEL DIA ...............");
for (int i = 0; i < 2; i++)
{  printf("Dia %d",i+1);
   cant=0;
    for (int j = 0; j < 24; j++)
    {
        printf("Hs: %d ,Tmp %f",j,mes[i][j]);
        if(mayor < mes[i][j]){
            mayor=mes[i][j];
            dia=i;
            hora=j;
        }
        cant=cant+mes[i][j];
    }
    if((cant/24.0) > promedio ){
        promedio=cant/24.0;
        diamayor=i;
    }
    printf("\n");
}
printf("Dia con mayor promedio de temperatura es: %d",diamayor);
printf("La temeperatura mayor fue %f el dia %d a la hora %d",mayor,dia,hora);





}