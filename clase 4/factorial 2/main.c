#include <stdio.h>
#include <stdlib.h>
//int factorial,num;
int factorial (int num);
int main()
{
   /* printf("Ingrese un numero ");
    scanf("%d",&num);
    for(i=num,i>1,i--)
    {
        factorial = factorial * i;

    }
*/
//Funcion factorial:
 printf("el factorial es: %d", factorial(0));


}
int factorial (int num)
    {
    int valor;
    if(num==0)  //por definicion el factorial de 0 es 1
        {
        return 1;
        }
    valor = num * factorial(num-1);
    return valor;


    }
