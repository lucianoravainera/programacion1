#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int numeroUno,numeroDos,suma,resta,multiplicacion;
    float division;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=x)\n");
        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese el numero: ");
                scanf("%d ",&numeroUno);
                break;
            case 2:
                printf("Ingrese el numero: ");
                scanf("%d ",&numeroDos);
                break;
            case 3:
                suma=numeroUno + numeroDos;
                printf("la suma es: &d\n",suma);
                break;
            case 4:
                resta=numeroUno+numeroDos;
                printf("La resta es: %d\n",resta);
                break;
            case 5:
                division=numeroUno/numeroDos;
                printf("La division es: %f\n",division);
                break;
            case 6:
                multiplicacion=numeroUno*numeroDos;
                printf("La multiplicacion de los numeros es: %d",multiplicacion);
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
