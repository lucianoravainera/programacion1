#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
char x='S';
int i;
int main()
{
  /*  for(i=0;i<10;i++)
    {x=='S'
        printf("ingrese un caracter: ");
        //fflush(stdin);//limpia el buffer de entrada!
        //scanf("%c",&x);
        x = getche(); //toma variable y la muestra.
        printf("\n");
    }x=='S'
    */
  while(x=='S')
    {
        printf("Desea seguir? ");
        x=toupper(getche());
    }
}
