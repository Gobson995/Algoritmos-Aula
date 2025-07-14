#include<stdio.h>
#include<ctype.h>


int main()
{
   char letra;
   
   scanf("%c", &letra);
   printf("Leu %c ascii(%i)", letra,letra);
   //if ( letra == 'E')
   //   printf(" um E");
   
   printf( "resultado %i", isalpha(letra));
   printf(" transforma %c", toupper(letra));

    return 0;
}
