#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0,desde,hasta;
    float numeroUno,numeroDos,suma,resta,multiplicacion,division;
    char menuTexto[] = "1- Ingresar 1er operando (A=x)\n2- Ingresar 2do operando (B=y)\n3- Calcular la suma (A+B)\n4- Calcular la resta (A-B)\n5- Calcular la division (A/B)\n6- Calcular la multiplicacion (A*B)\n7- Calcular el factorial (A!)\n8- Calcular todas las operacione\n9- Salir\n";
    char error[]="Error Opcion Invalida\n";
    int menu (char menuTexto[],char error,int desde,int hasta);

    while(seguir=='s')
    {
        /*
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");*/

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese el primer numero(A): ");
                scanf("%f",&numeroUno);
                break;
            case 2:
                printf("Ingrese el segundo numero(B): ");
                scanf("%f",&numeroDos);
                break;
            case 3:
                suma=numeroUno + numeroDos;
                printf("la suma es: %f\n",suma);
                break;
            case 4:
                resta=numeroUno - numeroDos;
                printf("La resta es: %f\n",resta);
                break;
            case 5:
                division=numeroUno/numeroDos;
                printf("La division es: %f\n",division);
                break;
            case 6:
                while(numeroDos==0)
                 {
                    printf("No se puede dividir por 0\n");
                 }
                 multiplicacion=numeroUno*numeroDos;
                printf("La multiplicacion de los numeros es: %f\n",multiplicacion);
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }
    return 0;

}
