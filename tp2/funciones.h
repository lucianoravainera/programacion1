#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

/** \brief muestra el menu de opciones
 * \param numeroUno es el valor del primer operando para mostrar en el menu
 * \param numeroDos es el valor del segundo operando para mostrar en el menu
 * \param menuTexto es el texto del menu a ser mostrado
 * \param errorTexto es el mensaje de error a ser mostrado
 * \param desde limite inferior a validar
 * \param hasta limite superior a validar
 * \return return retorna la opcion seleccionada del menu
 */

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

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[]);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[], int dni);

#endif // FUNCIONES_H_INCLUDED
