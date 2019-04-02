#include <stdio.h>
#include <stdlib.h>
// Ejemplo aprenderaprogramar.com
int main() {
 printf("Programa de administracion de hora. \n Ingrese la opcion que desea \n 1. Empleado part-time \n 2. Empleado full-time \n 3. Empleado full-time con horas estras ");
 int opcion;
 int cantDias;
 int total=40;
 int extras;
 scanf("%d", &opcion);

 switch(opcion){
    case 1:
     printf("trabajo 20 hs");
    break;
    case 2:
     printf("trabajo 40 hs");
    break;
    case 3:
     printf("\n ¿cuantos dias trabajo horas extras? ");
     scanf("%d",&cantDias);   
     for (int i = 1; i <= cantDias ; ++i)
      {
        printf("Ingrese horas extras para el dia %i : ",i);
        scanf("%d", &extras);
        total = total+extras;
      } 
      printf("trabajo %i hs",total);
    break;
    default:
        printf("opcion incorrecta");
    break;
 }
}