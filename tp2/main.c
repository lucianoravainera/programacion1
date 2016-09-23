#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"


int main()
{
    char seguir='s';
    char menuTexto [] ="1- Agregar persona\n2- Borrar persona\n3- Imprimir lista ordenada por  nombre\n4- Imprimir grafico de edades\n5- Salir\n";
    char errorTexto [] = "Opcion Invalida.";
    int desde =1,hasta=5;
    int opcion=0;

    while(seguir=='s')
    {
        system("cls");
        fflush(stdin);
        opcion = menu (menuTexto,errorTexto,desde,hasta);

        switch(opcion)
        {
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
