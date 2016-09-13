#include <stdio.h>
#include <stdlib.h>
#define N 3

int main()//no funciona
{
    int numero[N],i;
    char letra[N],seguir;

    for(i=0;i<N;i++)
        {
          fflush(stdin);
          printf("Ingrse una letra %d ",i+1);
          numero[i]=i+1;
          scanf("%c",&letra[i]);
        }
    for(i=0;i<N;i++)
        {
          printf("letras %c \n",letra[i]);
        }


    return 0;
}
