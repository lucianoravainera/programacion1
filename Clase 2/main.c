#include <stdio.h>
#include <stdlib.h>
#define N 5

float calcularPromedio(int);


int main()
{

    /*
    Ingresar 20 numeros (for) (-100 Y 100 INCLUSIVE) (while)

    *sumatoria
    *promedio
    *cuantos de esos numeros son positivos , cuantos negativos y cuantos 0
    *maximo, el minimo (en que orden se ingreso)

    */

    int a;
    float j=7.7;
   a=(int)j;
    int numero;
    int i;
    int acumulador=0;
    int maximo, minimo;
    int contPos=0, contNeg=0, contCero=0;
    int posMax, posMin;
    float promedio;
    int flag=0;

    //for(inicializacion de la variable de control;condicion de continuidad de bucle;incremento de variable de control)

    for(i=0; i<N; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);
        while(numero < -100 || numero > 100)
        {
            printf("Error!!! Reingrese un numero entre -100 y 100: ");
            scanf("%d", &numero);
        }

        acumulador = acumulador + numero; // acumulador += numero;
        //////////////////////////////////////////////
        if(numero<0)
        {
            contNeg++;
        }
        else
        {
            if(numero>0)
            {
                contPos++;
            }
            else
            {
                contCero++;
            }
        }
        /////////////////////////////////////////////////

        if(numero>maximo || flag==0)
        {
            maximo=numero;
            posMax=i+1;
        }

        if(numero<minimo|| flag==0 )
        {
            minimo = numero;
            posMin=i+1;
            flag=1;
        }



    }
        promedio = calcularPromedio(acumulador);

        printf("La sumatoria es %d\n", acumulador);
        printf("El promedio es %f\n", promedio);
        printf("Se ingresaron %d numeros positivos\n", contPos);
        printf("Se ingresaron %d numeros negativos\n", contNeg);
        printf("Se ingresaron %d ceros\n", contCero);
        printf("El maximo fue %d, en la posicion %d\n", maximo, posMax);
        printf("El minimo fue %d, en la posicion %d\n", minimo, posMin);







    return 0;
}

float calcularPromedio(int acum)
{
    float resultado;
    resultado = (float)acum/N;

    return resultado;

}


 ///////////////////////////////////////////////
//        if(flag==0)
//        {
//            maximo=numero;
//            minimo=numero;
//
//            posMax=i+1;
//            posMin=i+1;
//
//            flag=1;
//        }
//        else
//        {
//            if(numero>maximo)
//            {
//                maximo=numero;
//                 posMax=i+1;
//            }
//            else
//            {
//                if(numero<minimo)
//                {
//                    minimo=numero;
//                    posMin=i+1;
//                }
//            }
//
//        }
