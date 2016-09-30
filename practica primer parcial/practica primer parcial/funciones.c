#include "funciones.h"
int menu (char menuTexto[],char errorTexto[],int desde,int hasta)
{
        int respuesta,opcion;
        printf("%s",menuTexto);
        scanf("%d",&opcion);
        if(opcion<=hasta && opcion>=desde)
        {
            respuesta = opcion;
        }
        else {
        printf("%s",errorTexto);
        getch ()!='\n';
        }
    return respuesta;
}
