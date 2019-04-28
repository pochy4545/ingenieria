#include <stdio.h>
#include <stdlib.h>

int main(){

int num[30]={10000,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,-26,-27,29,-29};

for (int i = 0; i < 30; i++)
{
  printf("%d",num[i]);
  printf("\n");
}
int positivos=0;
int negativos=0;
int ceros=0;
for (int i = 0; i < 30; i++)
{
  if (num[i]>0)
  {
   positivos++;
  }else{
        if (num[i]<0)
        {
           negativos++;
        }else{
           ceros++;
        } 
  }
}
printf("Cantidad de positivos: %d \nCantidad de negativos: %d \nCantidad de ceros: %d ",positivos,negativos,ceros);

}

