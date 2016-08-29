#include <stdio.h>
#include <stdlib.h>
#include "funciones.h" //llamo al header que contiene la llamada
int main()
{
    int a;
    int b=10;
    a=b;
    a= funcion(a);//funcion (aca va lo que le mando a la funcion)
    printf("el valor es: %d \n",a);
    return 0;
}
