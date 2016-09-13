
   /*
   15 productos

   codigo
   descripcion
   precio

   Altas (el priemro que este en -1 en codigo)
   Bajas
   Modificacion
   L (2ble criterio precio-descripcion)




   */#include <stdio.h>
#include <stdlib.h>
#define T 3
int main()
{

   int numeros[T], auxNumero, flag=0;
   char letras[T], rta;
   int i;

   for(i=0; i<T; i++)
   {
       printf("Ingrese un numero: ");
       scanf("%d", &numeros[i]);
       printf("Ingrese  una letra: ");
       letras[i]=getche();
       printf("\n");

   }

    printf("Ingrese el numero para la modificacion: ");
    scanf("%d", &auxNumero);
    for(i=0; i<T; i++)
    {
        if(auxNumero==numeros[i])//Hay coincidencia
        {
          printf("El dato a modificar es: %c\n", letras[i]);
          printf("Esta seguro de realizar la modificacion? s/n: ");
          rta=getche();
          if(rta=='s')
          {
            printf("Ingrese  una letra: ");
            letras[i]=getche();
            printf("\n");
          }
          else
          {
              printf("Accion cancelada!!!\n");
          }
          flag=1;
          break;
        }
    }
    if(flag==0)
    {
         printf("No existe el numero!!!");
    }


     printf("Ingrese el numero para la baja: ");
    scanf("%d", &auxNumero);
    for(i=0; i<T; i++)
    {
        if(auxNumero==numeros[i])//Hay coincidencia
        {
          printf("El dato a borrar es: %c\n", letras[i]);
          printf("Esta seguro de realizar la modificacion? s/n: ");
          rta=getche();
          if(rta=='s')
          {
             numeros[i]=-1;
          }
          else
          {
              printf("Accion cancelada!!!\n");
          }
          flag=1;
          break;
        }
    }
    if(flag==0)
    {
         printf("No existe el numero!!!");
    }






   for(i=0; i<T; i++)
   {
      if(numeros[i]!=-1)
      {
         printf("%d-->%c\n", numeros[i], letras[i]);
      }


   }


   return 0;
}
