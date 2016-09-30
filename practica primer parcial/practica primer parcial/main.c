#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    char menuTexto [] = "::PRACTICA DEL PRIMER PARCIAL::\n1-Altas de peliculas\n2-Modificar datos de pelicula\n3-Baja de pelicula\n4-Alta de director\n5-Baja de director\n6-Informar\n7-Listado\n";
    char errorTexto [] = "Opcion Invalida.";
    char seguir='s';
    int desde =1,hasta=7,opcion=0;

    while(seguir=='s')
    {
        system("cls");
        fflush(stdin);
        opcion = menu (menuTexto,errorTexto,desde,hasta);
        switch(opcion)
        {
            case 1:

                break;
            case 2:;

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

                break;
            case 6:

                break;
            case 7:
                seguir = 'n';
                break;
        }

    }




}
