#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int resultado;
    printf("ingrese un numero: ");
    scanf("%d",&numeroUno);
    printf("ingrese otro numero: ");
    scanf("%d",&numeroDos);
    resultado = numeroUno + numeroDos;
    printf("la suma es : %d",resultado);

    //printf("Hello world!\n");
    return 0;
}
