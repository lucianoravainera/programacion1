#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#define MAX 2

typedef struct
{
    int day, month, year;

}date;

typedef struct
{
    int idMovie;
    char nameMovie[150];
    int idDirector;
    char nation[100];
    int year;
    int state;

}movie;

typedef struct
{
    char nameDirector[150];
    int idDirector;
    date birth;
    int estado;

}director;

typedef struct
{
    int idDirector;
    int cant;

}cantidadPeliculas;

typedef struct
{   int idDirector;
    int idMovie;

}peliculaYdirector;

int menu (char, int);

void testear(movie[], director[], cantidadPeliculas[]);

void imprimir(movie[], int);

int main()
{
    int i, j;
    movie pelicula[MAX], auxPelicula;
    date fecha[MAX];
    director direc[MAX];
    cantidadPeliculas contador[MAX];

    testear(pelicula, direc, contador);
    imprimir(pelicula, MAX);

    // recorro el vector de peliculas comparándolo con el vector de directores. termino y pruebo con el siguiente director.
    for (i=0; i<MAX; i++)
    {
        for (j = i; j<MAX; j++)
        {
            if (pelicula[j].idDirector == direc[i].idDirector)
            {
                printf("\n\n\n ASDASDASDAD \n%d", contador[i].cant);
                contador[i].cant = 2;
            }

        }
        contador[i].idDirector = direc[i].idDirector;
        // Cuando termino de recorres las estructuras tengo que copiar los valores obtenidos a la nueva estructura
        // que solo contenga id de pelicula y id de director.
    }

    printf("\n\n\n ASDASDASDAD \n%d", contador[i].cant);


    return 0;
}

int menu (char message, int cantidad)
{


}

void testear(movie pelicula[], director direc[], cantidadPeliculas contador[])
{
    int i, j;
    movie auxPelicula;
    date fecha[MAX];


    // deberia declarar un auxiliar para poder hacer el swap.
    // declarar J para burbujeo y comparar

    int dia[MAX] = {2,3};
    int mes[MAX] = {11,10};
    int fAnio[MAX] = {1923,1900};

    char nombrePeli[MAX][100] = {"asd", "asd"};
    int nroPeli[MAX] = {133, 12};
    int nroDirector[MAX] = {11,23};
    char origen[MAX][100] = {"china", "Serbia <3"};
    int anio[MAX] = {97,63};
    int estado[MAX] = {0,0};
    int cantdir[MAX] = {0,0};
    int iddir[MAX] = {0,0};

    char nombreDirector[MAX][100] = {"godard", "truffaut"};

    for (i= 0; i<MAX; i++)
    {
        pelicula[i].idDirector = nroDirector[i];
        pelicula[i].idMovie = nroPeli[i];
        strcpy(pelicula[i].nameMovie, nombrePeli[i]);
        strcpy(pelicula[i].nation, origen[i]);
        pelicula[i].state = estado[i];
        pelicula[i].year = anio[i];
        contador[i].cant = cantdir[i];
        contador[i].idDirector = iddir[i];

        direc[i].idDirector = nroDirector[i];
        strcpy(direc[i].nameDirector, nombreDirector[i]);
        direc[i].birth.day = dia[i];
        direc[i].birth.month = mes[i];
        direc[i].birth.year = fAnio[i];
    }

}

void imprimir(movie peli[], int cantidad)
{
    int i, j;
    movie auxPelicula;

        for (i=0; i<MAX; i++)
    {
        for (j=i+1; j<MAX; j++)
        {

            if (stricmp(peli[i].nameMovie, peli[j].nameMovie) > 0)
            {
                auxPelicula = peli[i];
                peli[i] = peli[j];
                peli[j] = auxPelicula;

            }

            else
            {
                if (stricmp(peli[i].nameMovie, peli[j].nameMovie) == 0)
                {
                    if(peli[i].year > peli[j].year)
                    {
                        auxPelicula = peli[j];
                        peli[j] = peli[i];
                        peli[i] = auxPelicula;
                    }
                }
            }
        }
    }

    for (i= 0; i<cantidad; i++)
    {
        printf("\n\nID = %d\nNombre = %s\nOrigen = %s\nEstado = %d\nAnio = %d\n\n", peli[i].idMovie, peli[i].nameMovie, peli[i].nation, peli[i].state, peli[i].year);
    }
}

///DUDA
/*
 como puede haber mas de un director por pelicula tengo que preguntar si el id de la pelicula es igual a la estructura de director,
 si es igual a la estructura pelicula
 y si está en más de un director.

 +peliculas
 ---------
 idpeli

 +peliDire
 ---------
 idpelicula
 iddirector

 +director
 ---------
 iddirector

 +dirCant
 --------
 que voy cargando segun la cantidad de peliculas que hace cada director.

 * Hay un for dentro de un for dentro de un for:
 1- for peliculas
 2- for pelicula - directores
 3- for directores.
*/


/*
pelicula[i].idDirector = nroDirector[i];
        pelicula[i].idMovie = nroPeli[i];
        strcpy(pelicula[i].nameMovie, nombrePeli[i]);
        strcpy(pelicula[i].nation, origen[i]);
        pelicula[i].state = estado[i];
        pelicula[i].year = anio[i];*/

/* funcion para contar entre estructuras:

EJ

typedef struct
{
    int idDeLaEstructura;
    int cantidadDeLaEstructura;

}estructura;

int funcionContadora (estructura variable[], int cantidadDeElementosDelArray, int idQueQuieroComparar)
{
    int i, contador = 0;
    for (i=0; i< cantidadDeElementosDelArray; i++)
    {
        if (variable[i].idDeLaEstructura == idQueQuieroComparar)
        {
            contador++;
        }
    }
    return contador;
}

Con eso averiguo UN ID. Pero necesito inicializarla para averiguar el de todos:

ej:

int main()
{
    int i;
    estructura variableEstructura[tamañoDelArray];

    for (i=0; i<cantidadDeElementosDelArray; i++)
    {
        int cant;
        cantidadReturn = funcionContadora(variableEstructura, cantidadDeElementosDelArray, variableAcomparar[i].idDeLaEstructura);
        variableEstructura[i].cantidadDeLaEstructura = cantidadReturn;
        variableEstructura[i].idDeLaEstructura = variableAcomparar[i].idDeLaEstructura ;
    }
}
*/
