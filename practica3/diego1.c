#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){


printf("Ingrese el tamano:\n");
int tam;
scanf("%d",&tam);
char matrix[tam][tam];

for (int i = 0; i < tam; i++)
{
    for (int j = 0; j < tam; j++)
    {
        if (i==j)
        {
            matrix[i][j]='x';
        }else
        {
            matrix[i][j]='0';
        }
        
        
    }
    
}
for (int i = 0; i < tam; i++)
{
    for (int j = 0; j < tam; j++)
    {
        printf("%c",matrix[i][j]);
    }
    printf("\n");
    
}

}