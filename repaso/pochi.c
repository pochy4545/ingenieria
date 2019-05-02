#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

//-------------------------------------MATRIZES----------------------------------------------------
//llenar matrix por teclado
int tam=4;
int matrix[tam][tam];
/*  j=0 j=1 j=2 j=3
i=0 |__|__|__|__|
i=1 |__|__|__|__|
i=2 |__|__|__|__|
i=3 |__|__|__|__|
*/
for (int i = 0; i < tam; i++)
{
    for (int j = 0; j < tam; j++)
    {
        //lleno un campo de la matrxi
        scanf("%d",&matrix[i][j]);
    }
    
}
//imprimir la matrix ya cargada
for (int i = 0; i < tam; i++)
{  for (int j = 0; j < tam; j++)
    {
    printf("$d", matrix[i][j]);
    }

    printf("\n");
    //salto de linea cuando cambia (i) si no la imprime en una sola linea
}

/*Imprimir esto pero sin cargar la matriz
    j=0 j=1 j=2 j=2
i=0 |X |__|__|__|
i=1 |__|X |__|__|
i=2 |__|__|X |__|
i=3 |__|__|__| X|
*/
for (int i = 0; i < tam; i++)
{
    for (int j = 0; j < tam; j++)
    {
        if(i==j){
            printf("X");
        }else{
            print(" ");
        }
    }
    printf("\0");
    
}
//imprimir lo mismo pero cargandolo primero en una matriz ,pero no por teclado
//...............Carga de matrix...................
char mat[5][5];
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        if (i==j)
        {
            mat[i][j]=="X";
        }else{
            mat[i][j]==" ";
        }
    }
    
}
//..............Imprimiendo matriz..................
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 5; j++)
    {
        printf("%c",mat[i][j]);
    }
    //salto de liena para que si haga una matrix
    printf("\0");
}

//si queremos imprimir lo siguiente hacemos esto , recordar que el tamano es ingresado por teclado
/*

54321
*4321
**321
***21
****1

*/
printf("Ingrese el tam: \n");
int tam;
scanf("%d",&tam);
int cant=tam;
  for (int i = 0; i < tam; i++)
  {     //notar la condicion j<i
     for (int j = 0; j < i; j++)
     {
           printf("*");
     }
     //notar el uso de la variable cant y ver porque no la igualo a tam si es lo mismo
     for ( int i=cant; i>0; i--)
     {
        printf("%d",i);
     }
     cant--;
     printf("\n");   
  }

//si queremos imprimir lo siguiente hacemos esto , recordar que el numero de la fila ultima y el tamano es por teclado
/*

11111
$   $
$   $
$   $
55555


*/  
printf("Ingrese el tam: \n");
int tam;
scanf("%d",&tam);
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
//--------------------------------------EJEMPLO COMPLEJO DE MATRIZ------------------------------------------------------


//CARGO LA MATRIZ
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
//PARA CALCULAR EL DIA QUE OCURRIO LA TEMPERATURA MAYOR
int dia=0;
//PARA CALCULAR LA HORA DE LA TEMPERATURA MAYOR
int hora=0;


float cant=0;
//PARA SACAR EL PROMEDIO DE LA TEMPERATURA MAYOR
int promedio=0;
//PARA GUARDARME EL DIA QUE TIENE MAYOR PROMEDIO DE TEMPERATURA
int diamayor=0;
printf("................HORAS DEL DIA ...............");

for (int i = 0; i < 2; i++)
{  printf("Dia %d",i+1);
   //PARA SUMAR LAS TEMPERATURAS DE UN MISMO DIA POR ESO SI CAMBIA DE DIA LA PONGO EN CERO DE NUEVO
   cant=0;
    for (int j = 0; j < 24; j++)
    {
        printf("Hs: %d ,Tmp %f",j,mes[i][j]);
        //COMPARO SI LA TEMPERATURA MAS GRANDE ME GUARDO SI DIA Y SU HORA
        if(mayor < mes[i][j]){
            mayor=mes[i][j];
            dia=i;
            hora=j;
        }
        //SUMO LA CANTIDAD QUE TENIA MAS UNA TEMPERATURA MAS DEL MISMO DIA
        cant=cant+mes[i][j];
    }
    //ME FIJO DESPUES QUE ACABO UN DIA SI ES EL MAYOR PROMEDIO Y ACTUALIZO EL PROMEDIO MAYOR Y GUARDO QUE DIA FUE
    if((cant/24.0) > promedio ){
        promedio=cant/24.0;
        diamayor=i;
    }
    printf("\n");
}
printf("Dia con mayor promedio de temperatura es: %d",diamayor);
printf("La temeperatura mayor fue %f el dia %d a la hora %d",mayor,dia,hora);


//-----------------------------------------STRING Y CHAR-----------------------------------------------------------------

//ler una texto y almacenarlo en un array de char, recordar que se lee con gets y este pone \0 al final de la cadena
// sacar el largo de el arreglo sin usar la funcion strleng(cadena1);

char cadena1[100];
printf("Ingrese una cadena de caracteres:\n");
gets(cadena1);
int largo=0;
int posicion=0;
//contamos hasta que leamos el caracter \0 que es el final de la cadena
while (cadena1[largo]!='\0')
{
    largo++;
    //recordar que si aca imprimimos es caracter por caracter por lo tanto es un char y no un string y se hace de la siguiente manera
    // printf("%c",cadenai[largo]);
}
//imprimimos la cadena como string y no como char ya que no la estamos recorriendo, recordar que para poder usar la siguiente funcion
//y ande bien hay que tener la ultima posicion del arreglo de caracteres un \0 , es decir si nosotros le agregamos a mano mas caracteres
//es decir en un for o como sea ,hay que agregarle nosotros el \0 al final para que ande lo siguiende, de lo contrario va a imprimir basura
//despues de la cadena
printf("%s",cadena1);
//notar que usamos %s y no %c y que el array no le indicamos posicion asi: cadena1[] sino que directamente le pasamos el nombre
//del arreglo asi:cadena1


//REPETIR LA ULTIMA LETRA DE LA PALABRA INGRESADA N VECES
char cadena[80];
int n;
printf("Ingrese una cadena con menos de 80 de longitud: \n");
gets(cadena);
printf("ingrese un N: \n");
scanf("%d",&n);
int largo=0;
while (cadena[largo]!='\0')
{
    
    largo++;
    //como largo se suma y despue comparamos si es \0 entonces largo los va a quedar con el valor 
    //de la poscion de \0
}
//por eso restamos aca uno para obtener el ultimo caracter
char ult=cadena[largo -1];
for ( int i = 0; i < n; i++)
{   //notar que usamos largo porque como largo quedo apuntando \0 es asi donde tenemos que ingresar el nuevo caracter
    cadena[largo]=ult;
    largo++;
}
//notar que largo se incremento una vez mas por lo que quedo apuntando a una posicion mas que el ultimo caracter
//como bien dijimos que para imprimir un array de caracteres como un string es nesesario que tenga el /0 
//por eso mismo se lo agregamos nosotros a mano por que al original lo remplazamos con el caractere que teniamos que ingresar.
cadena[largo]='\0';
printf("%s",cadena);

//---------------------------------USO DE DIV Y MOV PARA CALCULO DE CIFRAS ---------------------------------
int num;
printf("Ingrese un numero:\n");
scanf("%d",&num);
int digito;
int multiplicacion=1;
int suma=0;
if (num == 0)   
{   //PARA QUE LA MULTIPLICACION NO DE CERO
    multiplicacion=0;
}

while(num != 0 )
{   
    //ALMACENO EL ULTIMO DIGITO
    int digito =  num % 10;

    //PREGUNTO SI ES PAR
     if (digito % 2 == 0)
     {
         multiplicacion=multiplicacion * digito;
     }else{
         suma=suma + digito;
     }

     //DIVIDO EL NUMERO POR 10 ES DECIR  128/10 VA A DAR 12 Y EL MOD 8 Y ASI SUCESIVAMENTE HASTA QUE EL DIV DE CERO
     //QUE SIGNIFICA QUE LLEGAMOS ALFINAL DEL NUMERO
     num=num/10;
}

printf("La multiplicacion es: %d \nLa Suma es: %d",multiplicacion,suma);


//--------------------------------UN POCO DE ARREGLOS-----------------------
int num[30]={10000,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,-26,-27,29,-29};

//CUENTA POSITIVOS NEGATIVOS Y CEROS
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
 printf("Cantidad de positivos: %d \nCantidad de negativos: %d \nCantidad de ceros: %d \n",positivos,negativos,ceros);


 int num2[10];
 int x;
 for (int i = 0; i < 10; i++)
 { 
   printf("Ingrese el numero %d :",i+1);
   scanf("%d",&x);
   num2[i]=x;
   //CARGO LOS NUMEROS
 }

 for (int i = 0; i < 10; i++)
 { //IMPRIMO LA POSICION DEL NUMERO EN EL ARREGLO Y EL NUMERO EN SI
   printf("Numero en la posicion %d es: %d \n",i,num2[i]);
 }


float num3[20];
float z;
for (int i = 0; i < 20; i++)
{
  printf("Ingrese el numero %d : \n",i+1);
  scanf("%f",&z);
  num3[i]=z;
}
//SACA EL MAXIMO Y LA POSICION DEL MAXIMO PARA HACER ESO HAY QUE IR LLEVANDO LA POSICION DEL MAXIMO EN UNA VARIABLE
int posicion=0;
float maximo=num3[0];
for (int i = 1; i <20; i++)
{
  if (num3[i]>maximo)
  {
    maximo=num3[i];
    posicion=i;
  }
  
}
printf("El maximo es: %f en la posicion %d",maximo,posicion);


//-----------------------------EJERCICIO DE DIGITO------------------------------------------------
char cadena1[99];
char cadena2[99];
printf("Ingrese una cadena de caracteres:\n");
gets(cadena1);
int largo=0;
int posicion=0;
while (cadena1[largo]!='\0')
{
    if(isdigit(cadena1[largo])){
        cadena2[posicion]=cadena1[largo];
        posicion++;
    }
    largo++;
    //si no puden usar is digit seria asi
   /* switch (cadena1[largo])
    {
        case '0':cadena2[posicion]=cadena1[largo];
        break;
        case '1':cadena2[posicion]=cadena1[largo];
        break;
        case '2':cadena2[posicion]=cadena1[largo];
        break;
        case '3':cadena2[posicion]=cadena1[largo];
        break;
        case '4':cadena2[posicion]=cadena1[largo];
        break;
        case '5':cadena2[posicion]=cadena1[largo];
        break;
        case '6':cadena2[posicion]=cadena1[largo];
        break;
        case '7':cadena2[posicion]=cadena1[largo];
        break;
        case '8':cadena2[posicion]=cadena1[largo];
        break;
        case '9':cadena2[posicion]=cadena1[largo];
        break;
    default:
        break;
    }
    posicion++;
   */
    
}
cadena2[posicion]='\0';
printf("%s",cadena2);
}