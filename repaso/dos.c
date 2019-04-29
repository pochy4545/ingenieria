#include <stdio.h>
#include <stdlib.h>

int main(){

int usuario[2][4];
int dato;
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 4; j++)
    {   switch (j)
        {
        case 0:
             printf (" Ingrese el numero de usuario:\n");
             scanf ("%d",&dato);
             usuario[i][j]=dato;
            break;
        
        case 1:
                printf("Ingrese la contrasena :\n");
                scanf("%d", &dato);
                usuario[i][j]=dato;
            break;
        case 2:
                printf("Verificacion de contrasena :\n");
                scanf("%d",&dato);
                usuario[i][j]=dato;
           break;
        case 3:
               if (usuario[i][1]==usuario[i][2])
                {
                    usuario[i][j]=0;
                } else
                {
                    usuario[i][j]=1;
                }
           break;
        }    }    
}

for (int i = 0; i < 2; i++)
{   printf ("Usuario numero: %d\n", i+1);
    for (int j = 0; j < 4; j++)
    {
        switch (j)
        {
        case 0:
             printf(" id usuario: %d",usuario [i][j] );
            break;
        
        case 1:
             printf(" contrasena: %d",usuario [i][j] );
            break;
        case 2:
                printf(" repetir contrasena: %d",usuario [i][j] );
           break;
        case 3:
               printf(" ok: %d",usuario [i][j] );
           break;
        }
    }
    printf("\n");
    
}



}