#include "funciones.h"
int menu (char menuTexto[],char error,int desde,int hasta)
{
  int opcion;
  char respuesta;
  do {
        printf("%s",menuTexto);
        scanf("%d",&opcion);
        if(opcion<=hasta && opcion>=desde)
        {
            return opcion;
        }
        printf("%s",error);
        scanf("%c",&respuesta);
    } while(respuesta=='s');
    return -1;

}
