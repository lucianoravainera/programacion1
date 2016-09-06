#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* \brief Solicita un número al usuario y lo valida
* \param input Se carga el numero ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Limite inferior a validar
* \param hiLimit Limite superior a validar
* \return Si obtuvo el numero [0] si no [-1]
*
*/
int getInt(int* input,char message[],char eMessage[], int lowLimit, int hiLimit)
{
    //mensaje
    //leer el numero auxiliar
    //verificar si pude guardar el numero si scanf lo guardo o no
    //si scanf guardo, verificar el rango (si esta en rango guardar dato en el puntero)
    //validar con IF

    int auxiliar;
    int scanfNumero;
    printf("%s",message);
    scanfNumero =scanf("%d",&auxiliar);
    if(scanfNumero==0||auxiliar<lowLimit||auxiliar>hiLimit)
        {
        printf("%s",eMessage);
        return -1;
        }
    else {
        *input=auxiliar;
        return 0;
        }

    //*input=auxiliar;
    //*input = 44;
    //return 0; //devolver si esta bien
    // si esta mal devolver -1
}

/**
* \brief Solicita un número al usuario y lo valida
* \param input Se carga el numero ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Limite inferior a validar
* \param hiLimit Limite superior a validar
* \return Si obtuvo el numero [0] si no [-1]
*
*/
int getFloat(float* input,char message[],char eMessage[], float lowLimit, float hiLimit)
{
    float auxiliar;
    int scanfNumero;
    printf("%s",message);
    scanfNumero =scanf("%f",&auxiliar);
    if(scanfNumero==0||auxiliar<lowLimit||auxiliar>hiLimit)
        {
        printf("%s",eMessage);
        return -1;
        }
    else {
        *input=auxiliar;
        return 0;
        }

    //*input = 1234.88;
    //return 0;
}


/**
* \brief Solicita un caracter al usuario y lo valida
* \param input Se carga el caracter ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Limite inferior a validar
* \param hiLimit Limite superior a validar
* \return Si obtuvo el caracter [0] si no [-1]
*
*/
int getChar(char* input,char message[],char eMessage[], char lowLimit, char hiLimit)
{


    //*input = 'S';
    return 0;
}


/**
* \brief Solicita una cadena de caracteres al usuario y la valida
* \param input Se carga el string ingresado
* \param message Es el mensaje a ser mostrado
* \param eMessage Es el mensaje a ser mostrado en caso de error
* \param lowLimit Longitud mínima de la cadena
* \param hiLimit Longitud máxima de la cadena
* \return Si obtuvo la cadena [0] si no [-1]
*
*/
int getString(char* input,char message[],char eMessage[], int lowLimit, int hiLimit)
{
    //.........
    //.........
    //.........
    //.........

    strcpy(input,"Sheldon");
    return 0;
}
