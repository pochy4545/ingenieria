#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>

int main(){

printf ("Ingrese el tamano de la matriz :\n");
 int tam;
 scanf ("%d",&tam);
 for (int i = 0; i < tam; i++)
 {
     for (int j = 0; j < tam; j++)
     {
         if (i==j)
         {
             printf("x");
            
         }else
         {
             if (i+j==tam-1)
             {
                 printf("x");
             }else
             {
                 printf(" ");
             }
             
             
         }
         

     }
     printf("\n");
 }
 

}