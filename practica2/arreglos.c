#include <stdio.h>
#include <stdlib.h>

int main(){

//int num[30]={10000,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,-26,-27,29,-29};

//for (int i = 0; i < 30; i++)
//{
//  printf("%d",num[i]);
//  printf("\n");
//}
//int positivos=0;
//int negativos=0;
//int ceros=0;
//for (int i = 0; i < 30; i++)
//{
//  if (num[i]>0)
//  {
//   positivos++;
//  }else{
//         if (num[i]<0)
  //       {
 //           negativos++;
   //      }else{
     //       ceros++;
       //  } 
  // }
// }
// printf("Cantidad de positivos: %d \nCantidad de negativos: %d \nCantidad de ceros: %d \n",positivos,negativos,ceros);


// int num2[10];
// int x;
// for (int i = 0; i < 10; i++)
// { 
 //  printf("Ingrese el numero %d :",i+1);
 //  scanf("%d",&x);
 //  num2[i]=x;
// }

// for (int i = 0; i < 10; i++)
// {
 //  printf("Numero en la posicion %d es: %d \n",i,num2[i]);
// }


//float num3[20];
//float z;
//for (int i = 0; i < 20; i++)
//{
//  printf("Ingrese el numero %d : \n",i+1);
//  scanf("%f",&z);
//  num3[i]=z;
//}

//int posicion=0;
//float maximo=num3[0];
//for (int i = 1; i <20; i++)
//{
 // if (num3[i]>maximo)
 // {
 //   maximo=num3[i];
 //   posicion=i;
 // }
  
//}
//printf("El maximo es: %f en la posicion %d",maximo,posicion);

int alumnos[3];
float notas[3][3];
int x;
for (int i = 0; i < 3; i++)
{
  printf("Escribir numero de alumno en la posicion %d \n",i+1);
  scanf("%d",&x);
  alumnos[i]=x;
}


float modulo;
for (int i = 0; i < 3; i++)
{
  for (int j = 0; j < 3; j++)
  {
    if (j !=2)
    {
       printf("Ingrese la nota del alumno %d del modulo %d :\n" ,i+1,j+1);
       scanf("%f",&modulo);
       notas[i][j]=modulo;
    }else{
      notas[i][j]=(notas[i][0] + notas[i][1])/2;
      printf("debugin %f \n",notas[i][j]);

    }
  }
  
}


for (int i = 0; i < 3; i++)
{ printf("El alumno con legajo %d",alumnos[i]);
  for (int j = 0; j < 3; j++)
  {
    if (j != 2)
    {
      printf(" Nota modulo %d es: %f", j+1,notas[i][j]);
    }else{
      printf(" Nota final: %f \n",notas[i][j]);
    }
    }
 
}

}
