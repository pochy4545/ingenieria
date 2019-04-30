#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>

int main(){
printf("Ingrese el tam: \n");
int tam;
scanf("%d",&tam);
int cant=tam;
  for (int i = 0; i < tam; i++)
  {     
     for (int j = 0; j < i; j++)
     {
           printf("*");
     }
     for ( int i=cant; i>0; i--)
     {
        printf("%d",i);
     }
     cant--;
     printf("\n");   
  }

for (int i = 0; i < tam; i++)
{
    for (int j = 0; j < tam; j++)
    {
        if (i == 0)
        {
            printf("1");
        }else
        {
            if (i == (tam - 1))
            {
                printf("%d",tam);
            }else
            {
               if ((j==0)||(j== tam-1))
                {
                    printf("$");
                }else{
                    printf(" ");
                }
                
            }
        }
    }
    printf("\n");
    
}

}